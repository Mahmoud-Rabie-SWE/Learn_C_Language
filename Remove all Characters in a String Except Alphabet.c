#include <stdio.h>

int main()
{
    char text[100] = "#Mah%@#$!moud5495@$#$/*-+";
    int len;
    for(len = 0; text[len]; len++);
    int index;
    for(index = 0; index < len; index++)
    {
        if(text[index] < 'A' || text[index] > 'z')
        {
            text[index] = '\0';
        }
        else
        {
            for(int step = 0; step < len; step++)
            {
                if(text[step] == '\0')
                {
                    text[step] = text[index];
                    text[index] = '\0';
                }
            }
        }
    }
    printf("%s \n", text);
    return 0;
}
