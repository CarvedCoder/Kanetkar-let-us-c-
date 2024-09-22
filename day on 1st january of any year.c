#include <stdio.h>
int main(void)
{
    int year = 1900, no_leap_year = 0, diffrence = 0, days = 0, day = 0;
    while (year != 0)
    {
        printf("please input the year\n");
        scanf("%d", &year);
        diffrence = (year-1)-1900;
        no_leap_year = ((diffrence)/4);
        days = (diffrence * 365) + no_leap_year+1;
        day = (days % 7) + 1;
        switch (day)
        {
        case 1:
            printf("the day is monday\n");
            break;
        case 2:
            printf("the day is tuesday\n");
            break;
        case 3:
            printf("the day is wednesday\n");
            break;
        case 4:
            printf("the day is thursday\n");
            break;
        case 5:
            printf("the day is friday\n");
            break;
        case 6:
            printf("the day is saturday\n");
            break;
        case 7:
            printf("the day is sunday\n");
            break;
        }
    }
}