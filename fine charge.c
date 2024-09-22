#include <stdio.h>
int main(void)
{
    int x, y;
    float sum1, sum2, sum3;
    sum1 = sum2 = sum3 = 0;
    printf("A student picked a book from the library and returned it __ days later\n");
    scanf("%d", &x);
    if (x <= 5)
    {
        for (y = 1; y < x; y++)
        {
            sum1 += 0.5;
        }
        printf("The fine is %.1f rupees\n", sum1);
    }
    else if (x >= 6 && x <= 10)
    {
        for (y=5; y < x; y++)
        {
            sum2 += 1;
        }
        printf("The fine is %.1f\n", 2.5 + sum2);
    }
    else if (x >= 10 && x <= 30)
    {
        for (y=10; y < x; y++)
        {
            sum3 += 5;
        }
        printf("The fine is %.1f\n", 7.5 + sum3);
    }
}