#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int arrPos = 1;
    char menu [][10] = { "Option 1", "Option 2", "Option 3", "Option 4" };
    int sizeOfMenu = sizeof(menu) / sizeof(menu[0]);

    while(1)
    {
        printf("---------[Menu]--------+\n");
        int index;
        for(index = 0; index < sizeOfMenu; index++)
        {
            if(arrPos == index + 1)
            {
                printf(" ====>\t%s       |\n", menu[index]);
            }
            else
            {
                printf("\t%s       |\n", menu[index]);
            }
        }
        printf("-----------------------+\n");
        char key = getch();
        if(key == -32)
        {
            key = getch();
            switch(key)
            {
            case 72:
                //UP
                if(arrPos == 1)
                {
                    arrPos = 4;
                }
                else
                {
                    arrPos --;
                }
                break;
            case 80:
                //DWON
                if(arrPos == sizeOfMenu)
                {
                    arrPos = 1;
                }
                else
                {
                    arrPos ++;
                }
                break;
            }
        }
        system("cls");
    }

    return 0;
}
