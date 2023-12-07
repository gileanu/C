#include <stdio.h>

int main(void)
{
    // print the Fahrenheit - Celcius table using for loop
    int fahr;
    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
    {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
    }
}