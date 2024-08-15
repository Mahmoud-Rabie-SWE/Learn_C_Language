#include <stdio.h>
#include <stdlib.h>
int main()
{

    char text[5][50] = { "" };

    int index;
    //Input
    for(index = 0; index < 5; index++)
    {
        fgets(text[index], sizeof(text), stdin);
    }

    printf("----------------\n");

    //Print
    for(index = 0; index < 5; index++)
    {
        printf("%s", text[index]);
        printf("\n");
    }
    return 0;
}
