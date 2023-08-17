#include <windows.h>
int _stdcall WinMain(HINSTANCE hinstance,HINSTANCE hPrevinstance, LPSTR LpszCmdline,int nCmdShow){
//nCMDSHOW for how you want to open the file (minimize,maximize)
char str[10];
sprintf(str,"HINSTANCE Value: %d",hinstance);
MessageBox(0,str,"Abubakr",MB_YESNO);
return 0;
}