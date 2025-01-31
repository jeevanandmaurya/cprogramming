#include <stdio.h>

// Program to convert temperature from Degree Celcius to Degree Fahrenheit

int main()
{

    float cel, fahr;

    printf("Enter Your Temp(in Celcius): ");
    scanf("%f", &cel);

    fahr = 9 * (cel) / 5 + 32;
    printf("%0.2f Degree Celcius in Degree fahrenheit is %0.2f", cel, fahr);

    return 0;
}