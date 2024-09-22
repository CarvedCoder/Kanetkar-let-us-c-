#include <stdio.h>
#include <math.h>
int main(void)
{
    int z;
    float x, y;
    printf("value of x\n");
    scanf("%f", &x);
    printf("term value\n");
    scanf("%d", &z);
    y = (x - 1) / x;
    if (x == 1)
    {
        printf("value is 0\n");
        return 0;
    }
    for (int i = 2; i <= z; i++)
    {
        y += pow(y/2, i);
    }
    printf("value is %.4f\n", y);
}