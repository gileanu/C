#include <stdio.h>

int main(void)
{
    int c;
    int lastC = '\0';

    while ((c = getchar()) != EOF)
    {
        // check if the first char and last char
        // in string is a ' ' character
        if (c != ' ' || lastC != ' ')
        {
            putchar(c);
        }
        // replace all ' ' with a single ' ' from int lastC = '\0';
        lastC = c;
    }
    return 0;
}