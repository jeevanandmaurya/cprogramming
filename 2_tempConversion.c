#include <stdio.h>

int main()
{

    float centigrade,fahrenheit;
    printf("Enter temperature in Centigrade:\n");
    scanf("%f",&centigrade);
    fahrenheit=(9*centigrade)/5 + 32;
    printf("Temperature in Farhenheit: %0.2f",fahrenheit);

    return 0;
}
