/*
get the last digit
store it and cube it
add the sum
use if code block to asses it if it is same
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int temp, x, y,sum;
    temp = x = sum = 0;
    printf("Which integer do you want to check if its an armstrong number\n");
    scanf("%d", &x);
    y = x;
    while (y != 0)
    {
        temp = y % 10;
        sum += pow(temp, 3);
        y = y / 10;
    }
    if (x == sum)
    {
        printf("the number entered is an armstrong number\n");
    }
    else
    {
        printf("the entered number is not an armstrong number\n");
    }
}