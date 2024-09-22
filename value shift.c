#include <stdio.h>

int main(void)
{
    int a, j = 1, x, k;
    printf("how many values do you want to put in the array : ");
    scanf("%d", &a);
    if (a == 1)
    {
        printf("Shifting the array is not possible \n");
        return 0;
    }
    k = a;
    int values[a];
    int shift_values[a];
    for (int i = 1; i <= a; i++)
    {
        printf("value of %d element : ", i);
        scanf("%d", &values[i]);
    }
    printf("Array is :");
    for (int i = 1; i <= a; i++)
    {
        printf(" %d ", values[i]);
    }
    printf("\nHow many values do you want to shift circularly : ");
    scanf("%d", &x);
    if (x > a)
    {
        printf("Invalid input\n");
    }
    else if (x == a)
    {
        printf("Shifted array is :");
        for (int i = 1; i <= a; i++)
        {
            printf(" %d ", values[i]);
        }
        return 0;
    }
    for (int i = 1; i <= a; i++)
    {
        shift_values[i + x] = values[i];
        j++;
    }
    for (int i = 1; i <= x; i++)
    {
        shift_values[i] = values[k - (x - 1)];
        k++;
    }
    printf("\nShifted array is :");
    for (int i = 1; i <= a; i++)
    {
        printf(" %d ", shift_values[i]);
    }
}