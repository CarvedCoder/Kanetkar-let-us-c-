#include <stdio.h>
int main(void)
{
    int i, j, k, x, y;
    y = 1;
    printf("How many do you want to continue it to : ");
    scanf("%d",&x);
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < x - i; j++)
        {
            printf(" ");
        }
        for (k = 0; k <= i; k++)
        {
            if (i == 0 || k == 0)
            {
                y=1;
            }
            else y = y * (i - k + 1) / k;
            printf("%d ", y);
        }
        printf("\n");
    }
}