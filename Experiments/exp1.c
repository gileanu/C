#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Visualisation of memory allocation with ints
    int m;
    int* a;
    int* b = malloc(sizeof(int));
    a = &m;
    a = b;
    m = 10;
    *b = m + 2;
    free(b);
    printf("a: %i\nb: %i\nm: %d\n",*a ,*b ,m);
}