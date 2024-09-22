#include <stdio.h>
#include <math.h>
int addition(int x)
{
    if(x==0){return 0;}
    return x%10 + addition(x/10);
}

int main(void)
{
    int x, sum;
    printf("The integer you want to add to find the sum of it's digits : ");
    scanf("%d", &x);
    sum = addition(x);
    printf("%d\n",sum);
}
