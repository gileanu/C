#include <stdio.h>

int main(void)
{
    int c;
    int lastC;

    lastC = -1;

    while ((c = getchar()) != EOF)
    {
        if ((c == ' ' || c == '\t' || c == '\n'))
        {
            if (c != lastC)
            {
                putchar('\n');
            }
        }
        else
        {
            putchar(c);
        }
        lastC = c;
    }
    return 0;
}