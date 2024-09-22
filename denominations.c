#include <stdio.h>
int main(void)
{
    int x, i, j, k, l;
    printf("amount of purchase\n");
    scanf("%d", &x);
    i = x / 100;
    j = (x % 100) / 50;
    k = ((x % 100) % 50) / 10;
    l = x % 10;
    printf("the amount of denomination in rs100 notes is %d\n", i);
    printf("the amount of denomination in rs50 notes is %d\n", j);
    printf("the amount of denomination in rs10 notes is %d\n", k);
    printf("the amount of denomination in rs1 notes is %d\n", l);
}