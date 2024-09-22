#include <stdio.h>

int main(void)
{
    int x, y, z, i,j, k;
    x = z = 0;
    printf("which number do you want this to continue to : ");
    scanf("%d", &x);
    j = x;
    for (k = 1; k <= x; k++)
    {
        for (i = 1; i <= j; i++)
        {
            printf("%d", i);
            printf(" ");
        }
       for (y=1;y<=(k-1)*2-1;y++){
        printf("  ");
       }
        z=(k == 1 ? j - 1 : j);
        for (i = z; i != 0; i--)
        {
            printf("%d", i);
            printf(" ");
        }
        j--;
        printf("\n");
    }
}