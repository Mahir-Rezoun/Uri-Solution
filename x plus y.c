#include <stdio.h>
int main ()
{
    double x,y,x_plus_y,x_minus_y;
    printf("Enter Value of X+Y  : ");
    scanf("%lf",&x_plus_y);

     printf("Enter Value of X-Y is : ");
       scanf("%lf",&x_minus_y);

    x= (x_plus_y + x_minus_y)/2;
    y= (x_plus_y - x_minus_y)/2;
    printf("The Value of x is %.0lf\nThe value of Y is %.0lf",x,y);
}
