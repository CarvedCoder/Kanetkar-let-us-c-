/*
first the number % 8
octa = number %8
*/
#include <stdio.h>

int main(void)
{
    int x, y, n, octa;
    x = y = n = octa = 0;
    n = 1;
    printf("what is the integer you want to convert into octal equivalent : ");
    scanf("%d", &x);
    y = x % 8;
    octa = y;
    while (n != 0 && n >= 0)
    {
        x = x / 8;
        n = n * 10;
        y = x % 8;
        octa = (n * y) + octa;
    }
    printf("\nthe octal equivalent of your integer is : %d\n",octa);
}
