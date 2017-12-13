#include <stdio.h>
int main ()
{
       int a;
    double pi= 3.14159;

    scanf("%d",&a);

    printf("VOLUME = %.3lf\n",(4.0/3*pi*a*a*a));
           return 0;


}

/*Tip: Use (4/3.0) or (4.0/3) in your formula,
           because some languages (including C++)
           assume that the division's result
           between two integers is another integer. */
