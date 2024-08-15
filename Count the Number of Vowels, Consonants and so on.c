#include <stdio.h>

int main()
{
    char text[100];
    int vowels, consonant, digit, space, symbol;
    vowels = consonant = digit =  space = symbol = 0;
    printf("Enter a text: ");
    fgets(text, sizeof(text), stdin);
    int index = 0;

    while(text[index])
    {
        if(text[index] == 'a' || text[index] == 'e' || text[index] == 'o' || text[index] == 'u')
        {
            vowels++;
        }
        else if(text[index] >= 'A' && text[index] <= 'Z' || text[index] >= 'a' && text[index] <= 'z')
        {
            consonant++;
        }
        else if(text[index] >= '0' && text[index] <= '9')
        {
            digit++;
        }
        else if (text[index] == ' ')
        {
            space++;
        }
        else if(
                text[index] >= '!' && text[index] <= '/' ||
                text[index] >= ':' && text[index] <= '@' ||
                text[index] >= '[' && text[index] <= '`' ||
                text[index] >= '{' && text[index] <= '~'
               )
        {
            symbol++;
        }

        index ++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonant);
    printf("Digits: %d\n", digit);
    printf("Symbols: %d\n", symbol);
    printf("White Spaces: %d\n", space);

    return 0;
}
