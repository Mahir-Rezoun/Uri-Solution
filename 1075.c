#include <stdio.h>
int main ()
{
   int n=1,a;
scanf("%d",&a);

    while(n<=10000)
    {

    if(n%a==2)
            printf("%d\n",n);
            n++;
    }

    return 0;
}
