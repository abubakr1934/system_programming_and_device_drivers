#include <windows.h>
int _stdcall WinMain(HINSTANCE hinstance, HINSTANCE hPrevinstance, LPSTR lpszCmdline, int nCmdShow){
    HWND h;
    int num;
    num=atoi(lpszCmdline);
    h=CreateWindow("button","A-27 Abubakr",WS_OVERLAPPED,10,10,150,100,0,0,hinstance,0);
    switch(num){

    case 0:
        ShowWindow(h,SW_HIDE);
        break;

    case 1:
        ShowWindow(h,SW_NORMAL);
        break;

    case 2:
        ShowWindow(h,SW_MINIMIZE);
        break;

    case 3:
        ShowWindow(h,SW_MAXIMIZE);
        break;

    default:
        ShowWindow(h,SW_NORMAL);

    }
    MessageBox(0,"hi","waiting",MB_OK);
    return 0;

}
