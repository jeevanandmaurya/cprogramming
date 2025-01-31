#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{

    int x = 123, y = 345;
    int c = sum(x, y);

    printf("Sum of %d and %d is %d", x, y, c);

    return 0;
}