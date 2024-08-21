#include <stdio.h>

int main()
{
    float length, width, perimeter, area;
    
    printf("Program for Area And Perimeter Of Rectangle \n");
    printf("------------------------------------------- \n");

    printf("Length: ");
    scanf("%f", &length);
    printf("Width: ");
    scanf("%f", &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("Area: %.2f \n", area);
    printf("Perimeter: %.2f \n", perimeter);

    return 0;
}