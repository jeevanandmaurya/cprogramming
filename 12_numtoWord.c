#include <stdio.h>
#include <string.h>
int main()
{

    int number;
    int revnumber = 0;
    char word[10][10] = {"ZERO", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};

    printf("Enter a number atmost 10 digits:\n");
    scanf("%d", &number);

    while (number > 0)
    {

        revnumber = revnumber * 10 + (number % 10);
        number /= 10;
    }

    while (revnumber > 0)
    {

        for (int i = 0; i < 10; i++)
        {
            if (revnumber % 10 == i)
            {
                printf("%s ", word[i]);
            }
        }

        revnumber /= 10;
    }

    return 0;
}