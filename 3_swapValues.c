#include <stdio.h>

int main()
{

    int a,b,temp;
    a=34;
    b=55;
    printf("Before Swapping: a=%d b=%d\n",a,b);

    temp=a;
    a=b;
    b=temp;
    printf("After Swapping: a=%d b=%d\n",a,b);

    return 0;
}
