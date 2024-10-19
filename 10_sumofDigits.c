#include <stdio.h>

int main()
{

    int number;
    int digitSum = 0;
    int digitCount = 1;

    //Taking Input
    printf("Enter a number atmost 10 digits:\n");
    scanf("%d", &number);

    //Counting no of digits in given number
    int i = 10;
    while (number >= i)
    {
        i = i * 10;
        digitCount += 1;
    }

    //To get digits we divide number by 10,100,... so on and int its remainder
    int digit[digitCount];//Digits
    int n[digitCount];//Digits * 10 100 1000 ...

    int k = 10;
    n[0] = number % k;
    digit[0] = n[0];
    for (int i = 1; i < digitCount; i++)
    {
        k = k * 10;
        n[i] = number % k;
        for (int j = 1; j <= i; j++)
        {
            n[i] = n[i] - n[i - j];
        }

        // Converting n into digits
        digit[i] = n[i] * 10 / k;
    }
    //Adding Digits
    for (int j = 0; j < digitCount; j++)
    {
        digitSum += digit[j];
    }

    //Printing digit count and digit sum
    printf("Digit Count=%d\n", digitCount);

    for (int j = digitCount - 1; j > -1; j--)
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
