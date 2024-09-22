/*
overtime pay for every minute = 0.2
ask 10 workers (while loop)
calculate their overtime
*/
#include <stdio.h>

float pay(float y)
{
    float o_pay = 0.2 * (60 * (y - 40));
    return o_pay;
}

int main(void)
{
    int x;
    float y, z;
    x = 1;
    while (x <= 10)
    {
        printf("The time worker %d worked (in hours.minutes):", x);
        scanf("%f", &y);
        if (y > 40)
        {
            z = pay(y);
            printf("the overtime pay for worker %d is %.2f rupees\n", x, z);
        }
        else
        {
            printf("The worker didn't work overtime\n");
        }
    }
}