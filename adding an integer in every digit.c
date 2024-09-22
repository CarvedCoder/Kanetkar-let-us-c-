#include <stdio.h>
#include <math.h>
int main(void)
{
    int x,y,z,i,j,sum;
    y=z=i=j=0;
    printf("value of no.\n");
    scanf("%d", &x);
    j = x;
    while ( j != 0)
    {
        j = j / 10;
        i++;
    }
    while(y < i){
        z += pow(10,y);
        y++;
    }
    sum = x + z;
    printf("%d\n",sum);
}
