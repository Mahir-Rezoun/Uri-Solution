#include <stdio.h>
int main ()
{
    int ar[10],i,a;
    scanf("%d",&a);

    for (i=0;i<10;i++)
    {
        ar[i]=a;
       printf("N[%d] = %d\n",i,a);
       a=a*2;


    }
}
