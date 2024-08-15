#include <stdio.h>

int main()
{
    char text[100];
    int count, index, step, len;
    printf("Enter a character to find its frequency: ");
    scanf("%s", text);
    //get length
    for(len = 0; text[len]; len++);
    for(index = 0; index < len; index++)
    {
        if(text[index])
        {
            count = 1;
            for(step = index + 1; step < len; step++)
            {
                if(toupper(text[index]) == toupper(text[step]))
                {
                    count ++;
                    text[step] = '\0';
                }
            }
            printf("Frequency of %c: %d \n", tolower(text[index]), count);
        }
    }
    return 0;
}
