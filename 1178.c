#include <stdio.h>
int main ()
{
    double ar[10],a;
    int i;
    scanf("%lf",&a);

    for (i=0;i<10;i++)
    {
 ar[i]=a;
        printf("N[%d]=%.4lf\n",i,ar[i]);
        a=a/2;
    }
}
