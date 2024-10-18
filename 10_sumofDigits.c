#include <stdio.h>

int main()
{

    int number=1234;
    int digitSum=0;

    // printf("Enter a number:\n");
    // scanf("%d", &number);



    int a=0,b=0,c=0,d=0;
    a=number%10;
    b=(number%100-a)/10;
    c=((number%1000)-number%10)/100;
    d=(number-number%1000)/1000;
    digitSum=a+b+c+d;
    printf("Sum of digits of %d = %d + %d + %d + %d = %d",number,d,c,b,a,digitSum);

   
    return 0;
}
