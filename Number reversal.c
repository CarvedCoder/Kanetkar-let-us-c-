#include <stdio.h>
int main(void)
{
    int temp, x;
    printf("what number would you like to reverse\n");
    scanf("%d", &x);
    while (x != 0)
    {
        temp = x % 10;
        x = x / 10;
        printf("%d", temp);
    }
    printf("\n");
}