#include <stdio.h>

int main()
{

    int N, evenSum = 0, oddSum = 0;
    printf("Enter number N:\n");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        if (i % 2)
        {
            // i is odd
            oddSum += i;
        }
        else
        {
            // i is even
            evenSum += i;
        }
    }

    printf("From 1 to %d Sum of Even=%d Sum Odd=%d Total=%d", N, evenSum, oddSum, evenSum + oddSum);

    return 0;
}