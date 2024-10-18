#include <stdio.h>

int main()
{

    int number,divisor=0;
    printf("Enter a number:\n");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {

        if (number % i==0)
        {
            divisor++;
        }
   
    }

    if (divisor==2)
    {
        printf("%d is a prime number\n", number);
    }
    else
    {
           printf("%d is a not prime number\n", number);
    }

    return 0;
}
