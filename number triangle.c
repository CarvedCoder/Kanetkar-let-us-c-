#include <stdio.h>
int main(void)
{
    int j, k, x, l, y, z;
    j = k = 0;
    l = z = 1;
    y = 2;
    printf("the no.till it will print the no.triangle \n");
    scanf("%d", &x);
        for (int i = 1; i <= x - 6; i++)
        {
            for (k = 0; k < x - i; k++)
            {
                printf("  ");
            }
            for (j = 0; j < i; j++)
            {
                printf("%d   ", l);
                l++;
            }
            printf("\n");
        }
}