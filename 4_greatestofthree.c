#include <stdio.h>

int main()
{

   int a,b,c;

    printf("Enter 3 integers a, b & c\n");
    scanf("%d%d%d",&a,&b,&c);

    if(a>=b && a>=c){

        printf("Greatest Integer in %d, %d & %d is %d",a,b,c,a);

    }else if (b>=a && b>=c)
    {
        printf("Greates Integer in %d, %d & %d is %d",a,b,c,b);

    }else if (c>=a && c>=b)
    {
        printf("Greates Integer in %d, %d & %d is %d",a,b,c,c);

    }else{

    printf("Invalid Input");

    }
    
    

    return 0;
}
