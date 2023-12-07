C provides several other basic data types besides `int` and `float` including:

char / character - a single byte
short / short int
long / long int
double / double-precision floating point

```
#include <stdio.h>

int main(void)
{
// print Fahrenheit-Celsius table
// for fahr = 0, 20, ... ,300
float fahr, celsius;
int lower, upper, step;

lower = 0; // lower limit of temp table
upper = 300; // upper limit
step = 20; // step size

fahr = lower;
while (fahr <= upper)
	{
	celsius = (5.0 / 9.0) * (fahr - 32.0);
	printf("%3.0f\t%6.2f\n", fahr, celsius);
	fahr = fahr + step;
	}
}
```

printf("%3.0f\\t%6.2f\\n", fahr, celsius);

the %3.0f will print the value of fahr formated for: 3 characters long, 0 characters decimal points
the %6.2f will print the value of celcius formated for: 6 characters long, 2 characters decimal points

[[Info]]