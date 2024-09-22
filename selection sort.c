#include <stdio.h>

int main(void)
{
    int size;
    int arr[size];
    int temp;
    printf("Size of the array for selection sort : ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("the value for the %d element is : ", i);
        scanf("%d", &arr[i]);
    }
    printf("The array is :");
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
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
