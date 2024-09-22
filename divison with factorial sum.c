#include <stdio.h>

int factorial(int z)
{
    int product = 1;
    while (z != 0)
    {
        product *= z;
        z--;
    }
    return product;
}

int main(void)
{
    int x, y, z;
    float sum,n;
    x = y = sum = 0;
    n = 1;
    printf("the loop ends at : ");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        z = n;
        y = factorial(z);
        sum += n / y;
        n++;
    }
    printf("the sum is : %f\n", sum);
}