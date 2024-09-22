#include <stdio.h>
#include <math.h>
int factorial(int a)
{
    float product = 1;
    for (int k = 1; k <= a; k++)
    {
        product *= k;
    }
    return product;
}
float add(int term, int x, float sum)
{
    for (int i = 1; i <= term; i++)
        if (i % 2 != 0)
        {
            sum += pow(x, 2 * i + 1) / factorial(2 * i + 1);
        }
        else 
        {
            sum -= pow(x, 2 * i + 1) / factorial(2 * i + 1); 
        }
    return sum;
}
int main(void)
{
    int term, x;
    float sum, j;
    term = x = sum = j = 0;
    printf("value of x : ");
    scanf("%d", &x);
    printf("enter no of terms here : ");
    scanf("%d", &term);
    j = add(term, x, sum);
    sum = x - j;
    printf("value is %.5f\n", j);
}