#include <stdio.h>

/* print Celsius-Fahrenheit table
for celsius =0, 10, ..., 100; floating-point version */
int main()
{
float fahr, celsius;
float lower, upper, step;
lower = -10.0;  /* lower limit of temperature scale */
upper = 100; /* upper limit */
step = 1;   /* step size */

celsius = lower;
while(celsius <= upper){
    fahr = (9.0*celsius/5) + 32.0;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius += step;
}
}

