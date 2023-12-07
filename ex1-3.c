#include <stdio.h>

int main(void)
{
    // print Fahrenheit-Celsius table
    // for fahr = 0, 20, ... ,300
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;   // lower limit of temp table
    upper = 300; // upper limit
    step = 20;   // step size

    fahr = lower;
    printf("Fahrenheit temp \tCelsius temp \n");
    while (fahr <= upper) 
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%15.0f\t%20.2f\n", fahr, celsius);
        fahr = fahr + step;
    }
}