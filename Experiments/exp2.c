#include <stdio.h>

int fact(int n);

int main(void)
{
    int x;
    printf("Number is: ");
    scanf("%x", &x);
    printf("Factorial of %i is: %i\n", x, fact(x));
}

int fact(int n)
{
    if (n == 1)
        return 1;
    else
        return n * fact(n -1);
}

/*
Looking at the call stack we observe:
    First we call main()
        we init x;
    Next call is for printf();
    Next call is for scanf();
    Next call if for printf() again
        inside printf() we call for fact() witch will itself call fact()
        depending on how big x is

The call stack for x = 5;
main() -> printf() -> scanf() -> printf() -> fact(5) -> fact(4) -> fact(3) -> fact(2) -> fact(1) 
*/