#include <stdio.h>
int main ()
{
    float a,b,c;

    scanf("%f %f",&a,&b);

    if (a<0 && b<0)
        printf("nota invalida");
    else
    {
        c=(a+b)/2;
        printf("%.1f",c);
    }
    return 0;
}
