#include <stdio.h>

int main()
{
    int arr[5][5] =
    {
        {3,4,5,6,7},
        {9,6,8,4,6},
        {1,5,3,8,6},
        {13,44,100,30,10},
        {75,36,14,48,95},
    };

    int sizeOfColumns = sizeof(arr[0]) / sizeof(int);
    int sizeOfRows = sizeof(arr) / sizeof(arr[0]);

    int sum = 0, row, col;
    for(row = 0; row < sizeOfRows; row++)
    {
        for(col = 0; col < sizeOfColumns; col++)
        {
            sum += arr[row][col];
        }
    }
    for(row = 0; row < sizeOfRows; row++)
    {
        for(col = 0; col < sizeOfColumns; col++)
        {
            printf("%-4d", arr[row][col]);
        }
        printf("\n");
    }

    double avg = (double)sum / (sizeof(arr) / sizeof(int));

    printf("----------\n");
    printf("Sum: %d \n", sum);
    printf("Average: %.2lf \n", avg);
    return 0;
}
