#include <stdio.h>
int main(void)
{
    int x, y, z;
    printf("enter the integer\n");
    scanf("%d",&x);
    y = x % 10;
    while (x != 0)
    {
        z = x % 10;
        x = x / 10;
    }
    printf("the sum of the first and last digit is %d\n", y + z);
}