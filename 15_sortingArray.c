#include <stdio.h>

int main()
{

    int arr[10] = {23, -49, 553, 22, 12, 3, 0, 22, 56, -80};
    int ascending[10];
    int descending[10];

    for (int i = 0; i < 10; i++)
    {
        ascending[i] = arr[0];
    }

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < ascending[0])
        {
            ascending[0] = arr[i];
        }
    }

    for (int j = 1; j < 10; j++)
    {
        for (int i = 0; i < 10; i++)
        {
            if (arr[i] < ascending[j] && arr[i] > ascending[j - 1])
            {
                ascending[j] = arr[i];
            }
        }
    }

    printf("Array:\n");
    for (int i = 0; i < 10; i++)
    {

        printf(" %d ", arr[i]);
    }
    printf("\nAscending Order Array:\n");
    for (int i = 0; i < 10; i++)
    {

        printf(" %d ", ascending[i]);
    }

    return 0;
}