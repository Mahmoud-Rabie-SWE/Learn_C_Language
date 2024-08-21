#include <stdio.h>

int main()
{
    int range;
    
    printf("====Program to display the prime numbers====\n");
    printf("Enter Range: ");
    scanf("%d", &range);

    if(range > 1)
    {
        printf("Prime numbers [1:%d]: ", range);
        int n;
        for(n = 2; n <= range; n++)
        {
            int x;
            for(x = 2; x <= n; x++)
            {
                if(!(n % x == 0) || n == 2)
                {
                    if(x == n - 1 || n == 2)
                    {
                        printf("%d ", n);
                    }
                }
                else
                {
                    break;
                }
            }
        }
    }
    else
    {
        printf("Enter Number Greater Than 1 \n");
    }

    return 0;
}