#include<stdio.h>
int main(){


int a=69,b=96;

printf("Values od a and b before Swapping: a = %d , b = %d",a,b);
int temp;
temp =a;
a=b;
b=temp;
printf("\nValues of a and b After Swapping: a = %d , b = %d",a,b);


    return 0;
}