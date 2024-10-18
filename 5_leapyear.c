#include <stdio.h>

int main()
{

    int year;
    printf("Enter a year:\n");
    scanf("%d", &year);

    if ((year % 4 && !(year%100)) || year%400)
    {
        printf("Year %d is not a leap year\n",year);
    }
    else
    {
        printf("Year %d is a leap year\n",year);
    }

    return 0;
}
