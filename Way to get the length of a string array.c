#include <stdio.h>

int main()
{
    char text[50] = "Mahmoud";
    int len;

    for(len = 0; text[len]; len++);

    printf("%d\n", len); //7

    return 0;
}
