#include <stdio.h>

int main()
{

    int arr[10] = {23, -49, 553, 22, 12, 3, 0, 22, 56, -80};
    // int ascending[10];
    // int descending[10];
    int swap_count=0;

    printf("Array:\n");
    for (int i = 0; i < 10; i++)
    {

        printf(" %d ", arr[i]);
    }

    //Sorting By Swapping
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int c = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = c;
            i = -1;
            swap_count++;
        }

    }

    printf("\nSwap Count-> %d",swap_count);
    printf("\nAscending Order Array:\n");
    for (int i = 0; i < 10; i++)
    {

        printf(" %d ", arr[i]);
    }

    return 0;
}