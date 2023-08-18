#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

struct literal
{
    char name[20];
    int address;
};

struct literal literal_table[MAX];
int num_literals = 0;

void insert_literal(char *name, int address)
{
    if (num_literals >= MAX)
    {
        printf("Literal table full\n");
        exit(1);
    }
    strcpy(literal_table[num_literals].name, name);
    literal_table[num_literals].address = address;
    num_literals++;
}

void display_literals()
{
    printf("Literal Table:\n");
    printf("------------------\n");
    printf("Literal\tAddress\n");
    printf("------------------\n");
    for (int i = 0; i < num_literals; i++)
    {
        printf("%s\t%d\n", literal_table[i].name, literal_table[i].address);
    }
    printf("------------------\n");
}

int main()
{
    insert_literal("=X'0A'", 200);
    insert_literal("=C'HELLO'", 204);
    insert_literal("=X'2F'", 210);
    display_literals();
    return 0;
}
