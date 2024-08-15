#include <stdio.h>

int main()
{
    for(int x = 1; x <= 10; x++)
    {
        for(int y = 1; y <= 5; y++)
        {
            printf("%d * %d = %d \t", y, x, x * y);
        }
        printf("\n");
    }
    return 0;
}
