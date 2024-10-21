#include <stdio.h>

int main()
{

    int number;
    int revnumber = 0;

    printf("Enter a number atmost 10 digits:\n");
    scanf("%d", &number);

    while (number > 0)
    {
        revnumber = revnumber * 10 + (number % 10);
        number /= 10;
    }

    printf("Reversed Number=%d\n", revnumber);
    return 0;
}