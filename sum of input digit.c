#include <stdio.h>
int main(void)
{
    int x, sum=0;
    printf("what value do you want for x :-\n");
    scanf("%d", &x);
    while (x != 0)
    {
        sum += x%10;
        x=x/10;
    }
    printf("%d\n", sum);
}
