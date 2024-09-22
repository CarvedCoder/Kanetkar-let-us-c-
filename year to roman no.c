#include <stdio.h>

int value(int a)
{
    int x = 0;
    if (a >= 1000)
    {
        x = 0;
    }
    else if (a >= 500)
    {
        x = 1;
    }
    else if (a >= 100)
    {
        x = 2;
    }
    else if (a >= 50)
    {
        x = 3;
    }
    else if (a >= 10)
    {
        x = 4;
    }
    else if (a >= 5)
    {
        x = 5;
    }
    else if (a >= 1)
    {
        x = 6;
    }
    return x;
}
int main(void)
{
    int a, x;
    a = x = 0;
    printf("year --> ");
    scanf("%d", &a);
    x = value(a);
    switch (x)
    {
    case 0:
        int b = a / 1000;
        for (int i = 0; i < b; i++)
        {
            printf("m");
        }
    case 1:
        int c = (a % 1000) / 500;
        for (int i = 0; i < c; i++)
        {
            printf("d");
        }
    case 2:
        int d = ((a % 1000) % 500) / 100;
        for (int i = 0; i < d; i++)
        {
            printf("c");
        }
    case 3:
        int e = (((a % 1000) % 500) % 100) / 50;
        for (int i = 0; i < e; i++)
        {
            printf("l");
        }
    case 4:
        int f = ((((a % 1000) % 500) % 100) % 50) / 10;
        for (int i = 0; i < f; i++)
        {
            printf("x");
        }
    case 5:
        int g = (((((a % 1000) % 500) % 100) % 50) % 10) / 5;
        for (int i = 0; i < g; i++)
        {
            printf("x");
        }
    case 6:
        int h = ((((((a % 1000) % 500) % 100) % 50) % 10) % 5);
        for (int i = 0; i < h; i++)
        {
            printf("x");
        }
    }
}