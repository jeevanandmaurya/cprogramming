#include <stdio.h>

void decimaltoBin(int deci)
{
    int binary = 0;
    int temp = deci;
    int k = 1;
    while (temp > 0)
    {
        binary = binary + (temp % 2) * k;
        temp = temp / 2;
        k *= 10;
    }

    printf("\n%d", binary);
}
void binarytoDec(int bin)
{
    int decimal = 0;
    int temp = bin;

    int j = 1;
    while (!temp == 0)
    {
        decimal += j * (temp % 10);
        temp /= 10;
        j *= 2;
    }

    printf("\n%d", decimal);
}

int main()
{

    int number;
    int revnumber = 0;
    int mode = 0;

    char systems[4][20] = {"Binary(2)", "Octal(8)", "Decimal(10)", "Hexadecimal(16)"};

    for (int i = 0; i < 4; i++)
    {
        printf("%d. %s\n", i + 1, systems[i]);
    }
    int index = 0;
    printf("Enter your input number system:\n");
    scanf("%d", &index);
    for (int i = 0; i < 4; i++)
    {
        if (i + 1 == index)
            printf("Enter a %s number atmost 10 digits:\n", systems[i]);
    }
    scanf("%d", &number);

    for (int i = 0; i < 4; i++)
    {
        if (index==i+1)
        {
            continue;
        }
        
        printf("%d. %s to %s\n", index, systems[index-1], systems[i]);
    }

    // scanf("%d", &mode);

    // if (mode == 1)
    // {
    //     decimaltoBin(number);
    // }
    // else if (mode == 2)
    // {
    //     binarytoDec(number);
    // }

    return 0;
}