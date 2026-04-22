#include <stdio.h>
/*this produces and infinte number of results*/

int main()
{
    float cels, fahrenheit;
    float lower, upper, step;
    lower = 300; /* lower limit of temperatuire scale */
    upper = 0; /* upper limit */
    step = 20; /* step size */
    cels = upper;
    while (cels <= upper) {
        fahrenheit = (9.0/5.0) * (cels+32.0);
        printf("%3.0f %6.1f\n", cels, fahrenheit);
        cels = cels - step;
    }
}