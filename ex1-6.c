#include <stdio.h>

int main()
{
    int c = 0;
    while (((c = getchar()) != EOF) == 1 || ((c = getchar()) != EOF) == 0)
    {
        putchar(c);
    }
}