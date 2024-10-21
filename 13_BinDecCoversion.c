#include <stdio.h>

void decimaltoBin(int deci)
{
    int binary = 0;
    int temp = deci;
    int k=1;
    while (temp >0)
    {
        binary = binary + (temp % 2)*k;
        temp = temp/2;
        k*=10;
    }

    printf("\n%d", binary);
}
void binarytoDec(int bin)
{
    int decimal=0;
    int temp=bin;

    int j=1;
    while (!temp==0)
    {
        decimal+=j*(temp%10);
        temp/=10;
        j*=2;
        
    }
    

    printf("\n%d", decimal);
}

int main()
{

    int number;
    int revnumber = 0;
    int mode = 0;
    printf("Enter a number atmost 10 digits:\n");
    scanf("%d", &number);
    printf("1. Decimal to Binary\n2. Binary to Decimal\n");
    scanf("%d", &mode);

    if (mode == 1)
    {
        decimaltoBin(number);
    }
    else if (mode == 2)
    {
        binarytoDec(number);
    }

    return 0;
}