#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n)
{
    int m = n / 2;
    int counter;
    for(counter = 2; counter <= m; counter++)
    {
        if(n % counter == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int range;
    
    printf("====[Program to display the prime numbers]====\n");
    printf("Enter Range: ");
    scanf("%d", &range);

    if(range > 1)
    {
        printf("Prime numbers: ");
        int n;
        for(n = 2; n <= range; n++)
        {
            if(isPrime(n))
            {
                printf("%d ", n);
            }
        }
    }
    else
    {
        printf("Enter Number Greater Than 1 \n");
    }

    return 0;
}