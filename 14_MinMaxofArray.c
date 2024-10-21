#include <stdio.h>

int main()
{

    int arr[10] = {23, 49, 553,0, 12, 3, 1, 22, 56, -80};

    int min = arr[0], max = arr[0];

    for (int i = 0; i < 10; i++)
    {

        if (arr[i] < min)
        {
            min = arr[i];
            continue;
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Array:\n");
    for (int i = 0; i < 10; i++)
    {

        printf(" %d ", arr[i]);
    }

    printf("\nMax = %d Min = %d", min, max);

    return 0;
}