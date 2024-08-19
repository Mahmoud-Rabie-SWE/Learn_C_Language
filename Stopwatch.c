#include <stdio.h>
#include <conio.h>
#include <windows.h>


HWND WINAPI GetConsoleWindowNT(void)
{
    //declare function pointer type
    typedef HWND WINAPI(*GetConsoleWindowT)(void);
    //declare one such function pointer
    GetConsoleWindowT GetConsoleWindow;
    //get a handle on kernel32.dll
    HMODULE hk32Lib = GetModuleHandle(TEXT("KERNEL32.DLL"));
    //assign procedure address to function pointer
    GetConsoleWindow = (GetConsoleWindowT)GetProcAddress(hk32Lib
    ,TEXT("GetConsoleWindow"));
    //check if the function pointer is valid
    //since the function is undocumented
    if(GetConsoleWindow == NULL){
        return NULL;
    }
    //call the undocumented function
    return GetConsoleWindow();
}

int main()
{
    int h = 0,m = 0,s = 0;

    SetConsoleTitle("Stopwatch | Mahmoud Rabie");
    //system("mode 50, 10");
    HWND hWnd=GetConsoleWindowNT();
    MoveWindow(hWnd,580,300,400,200,TRUE);


    printf("\t\t\t  Stopwatch\n");
    printf("\t\t+---------------------------+\n");
    printf("\t\t|\t   00:00:00\t    |\n");
    printf("\t\t+---------------------------+\n");
    printf("\nPress [S] To Start\n");
    printf("Press [P] To Pause\n");
    printf("Press [R] To Reset\n");

    while(toupper(getch()) != 'S'){}


    while(1)
    {
        Sleep(1000);
        s += 1;

        if(s > 59)
        {
            m += 1;
            s = 0;
        }
        if(m > 59)
        {
            h += 1;
            m = 0;
        }

        system("cls");

        printf("\t\t\t  Stopwatch\n");
        printf("\t\t+---------------------------+\n");
        printf("\t\t|\t   %02d:%02d:%02d\t    |\n", h, m, s);
        printf("\t\t+---------------------------+\n");
        printf("\nPress [S] To Start\n");
        printf("Press [P] To Pause\n");
        printf("Press [R] To Reset\n");
        printf("Press [E] To Exit\n");

        if(kbhit())
        {
            switch(toupper(getch()))
            {
            case 'P':
                system("pause");
                break;
            case 'R':
                h=m=s=0;
                break;
            case 'E':
                exit(0);
                break;
            }
        }
    }

    return 0;
}
