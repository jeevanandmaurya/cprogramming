#include <stdio.h>

int main()
{

    int number;
    int digitSum = 0;

    printf("Enter a number atmost 10 digits:\n");
    scanf("%d", &number);

    while (number > 0)
    {
        digitSum += number % 10;
        number /= 10;
    }

    printf("Digit Sum=%d", digitSum);
    return 0;
}