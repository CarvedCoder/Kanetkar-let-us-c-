#include <stdio.h>

int main(void)
{
    int x1, y1, x2, y2, x3, y3;
    printf("enter the value of x1,y1,x2,y2,x3,y3\n");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    if (x1 / y1 == x2 / y2 == x3 / y3)
    {
        printf("these are parallel points and lie on the same line\n");
    }
    else
    {
        printf("these are not parallel points and don't lie on the same line\n");
    }
}