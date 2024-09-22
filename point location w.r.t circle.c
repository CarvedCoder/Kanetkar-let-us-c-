/*
x = centre
y = radius
x1 , y1 = point coord
put pythagoras theorem to calculate distance
put if code blocks in comparsion with radius
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int x1, y1,x2,y2, radius;
    float distance;
    printf("what is the coordinate of the centre of the circle : ");
    scanf("%d %d", &x1, &y1);
    printf("what is the radius of the circle : ");
    scanf("%d",&radius);
    printf("what is the coordinates of the point : ");
    scanf("%d %d", &x2, &y2);
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    if (radius == distance)
    {
        printf("the point is present on the circle\n");
    }
    else if (radius < distance)
    {
        printf("the point is present outside the circle\n");
    }
    else if (radius > distance)
    {
        printf("the point is present inside the circle\n");
    }
}
