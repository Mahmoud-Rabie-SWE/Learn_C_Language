#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char name[100];
    char myChar;
    int index = 0;
    //Input
    do
    {
        myChar = getche();
        name[index] = myChar;
        index++;
    }while(myChar != ("%c", 13));
    name[index] = '\0';
    printf("\n---------------\n");
    // Print
    index = 0;
    while(name[index] != '\0')
    {
        printf("%c", name[index]);
        index++;
    }
    printf("\n");
    return 0;
}
