#include <stdio.h>

int main(void)
{
    // convert Celsius to Fahrenheit
    float fahr, celsius;
    int lower, upper, step;

    lower = -300;   // lower bound
    upper = 300;    // upper bound
    step = 20;      // print temp every [step]'s

    celsius = lower;
    printf("Celsius temp \tFahrenheit temp\n");
    while (celsius <= upper)
    {
        fahr = celsius * (9.0 / 5.0) + 32;
        printf("%12.0f\t%15.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}