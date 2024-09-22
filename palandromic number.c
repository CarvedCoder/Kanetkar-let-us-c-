#include <stdio.h>


int reverse(int x)
{
    int temp = 0;
    while (x != 0)
    {
        temp = temp * 10 + x % 10;
        x = x / 10;
    }
    return temp;
}

int main(void)
{
    int x, y;
    printf("write the integer to verify if it's an palindrome \n");
    scanf("%d", &x);
    y = reverse(x);
    printf("the reversed number is %d\n", y);
    if (y==x)
    {
    printf("it is a palindrome no.\n");
    }
    else
    {
    printf("it is not a palindrome no. \n");
    }
}
