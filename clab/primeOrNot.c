#include <stdio.h>
int main()
{

    int n;
    printf("Enter A Number: ");
    scanf("%d", &n);

    int factors=0;
    if(n>1)factors++;//Including the number itself

   
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            factors++;
        }
        if (factors > 2)
        {
            printf("%d is not a Prime Number", n);
            return 0;
        }
    }
    if (factors == 2)
    {
        printf("%d is Prime Number", n);
    }
   

    return 0;
}