/*
21 matchsticks
a player picks a number between 1,2,3,4
store it as a sum
a computer also picks between 1,2,3,4
store it as sum
but make sure the computer does not get the last pick
*/
#include <stdio.h>

int main(void)
{
    int x, y, z, sum, round;
    x = y = sum = z = 0;
    round = 1;
    while (sum != 20)
    {
    again:
        printf("----------round %d----------\n", round);
        printf("Pick between 1,2,3 or 4 matchsticks : ");
        scanf("%d", &x);
        if (x > 4)
        {
            printf("invalid input\n");
            goto again;
        }
        sum += x;
        y = 5 - x;
        printf("the computer has choose %d matchstick/s\n", y);
        sum += y;
        z = 21 - sum;
        printf("matchsticks left : %d\n", z);
        printf("----------end of round %d----------\n", round);
        round++;
    }
    printf("The computer has won\n");
}