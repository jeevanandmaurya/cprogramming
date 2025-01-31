#include <stdio.h>

int main()
{

    int n, sum=0;
    printf("Enter a Number: ");
    scanf("%d", &n);

    int temp = n;
    while (temp)
    {
        sum += temp % 10;
        temp /= 10;
    }
    printf("Sum of Digits of %d is %d",n,sum);
}