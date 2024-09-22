#include <stdio.h>
int rec(int num)
{
    if (num)
    {
        return (num + rec(num - 1));
    }
    else{
        return 0;
    }
}
int main(void)
{
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    printf("%d\n",rec(n));
}
