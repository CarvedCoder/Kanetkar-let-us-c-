#include <stdio.h>
int main(void)
{
    int x;
    printf("enter a year\n");
    scanf("%d", &x);
    x = x % 4;
    if (x == 0)
    {
        printf("it is a leap year\n");
    }
    else
    {
        printf("it is not a leap year\n");
    }
}