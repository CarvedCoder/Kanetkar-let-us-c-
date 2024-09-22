#include <stdio.h>

int main(void)
{
    int a, b, c, x;
    printf("enter the ages to find the smallest one\n");
    scanf("%d %d %d", &a, &b, &c);
    x = (c < (a < b ? a : b) ? c : (a < b ? a : b));
    printf("%d", x);
}