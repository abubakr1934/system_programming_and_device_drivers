#include <windows.h>
int _stdcall WinMain(HINSTANCE hinstance,HINSTANCE hPrevinstance, LPSTR lpszCmdline,int nCmdShow){
char str[10];
int num,i,f=1;
num=atoi(lpszCmdline);
for(i=1;i<=num;i++)

{
f=f*i;
}
sprintf(str,"Factorial of %d is :%d",num,f);
MessageBox(0,str,"Factorial",MB_OK);
return 0;
}