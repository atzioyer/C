#include <stdio.h>

/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300*/

main()
{
    int celsius, fahr;
    int lower, upper, step;

    lower = 0;     /*lower limit of temperature level */
    upper = 300;   /*upper limit*/
    step = 20;     /*step size*/

    celsius = lower;
    printf("C\tF\n------------\n");
    while (celsius <= upper) {
        fahr = 9 * (celsius) / 5 + 32;
        printf("%d\t%d\n", celsius, fahr);
        celsius = celsius + step;
    }
}
