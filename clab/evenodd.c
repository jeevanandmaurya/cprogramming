#include<stdio.h>
int main(){



    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    if(num%2==0){
        printf("%d is an Even Number",num);
    }else{
        printf("%d is an Odd Number",num);
    }

    return 0;
}