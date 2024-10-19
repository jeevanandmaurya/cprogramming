#include <stdio.h>

int main()
{

    int number;
    int digitSum = 0;
    int digitCount = 1;

    // Taking Input
    printf("Enter a number atmost 10 digits:\n");
    scanf("%d", &number);

    // Counting no of digits in given number
    int tempNumber = number;
    while (tempNumber > 0)
    {
        digitCount += 1;
        tempNumber /= 10;
    }
    int digit[digitCount]; // Digits

    tempNumber = number;
    digitCount = 0;
    while (tempNumber > 0)
    {

        digit[digitCount] = tempNumber % 10;
        digitSum += digit[digitCount];
        digitCount += 1;
        tempNumber /= 10;
    }

    // Printing digit count and digit sum
    printf("Digit Count=%d\n", digitCount);

    for (int j = digitCount - 1; j >= 0; j--)
    {
        printf("%d", digit[j]);
        if (j > 0)
        {
            printf("+");
        }
    }
    printf("=%d", digitSum);

    return 0;
}
