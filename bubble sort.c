#include <stdio.h>
int main(void)
{
    int size, arr[size], temp;
    printf("Size of array : ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Value of element %d will be : ", i);
        scanf("%d", &arr[i]);
    }

    printf("The array that you have inputed is :");
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j] = temp;
            }
        }
    }
    printf("The sorted array is :");
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}