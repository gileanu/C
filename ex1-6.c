#include <stdio.h>

int main()
{
    int c = 0;
    while (((c = getchar()) != EOF) == 1 || ((c = getchar()) != EOF) == 0)
    {
        // to exit the getchar() loop: CTRL + D (unix), CRTL + W (windows)
        putchar(c);
    }
    return 0;
}