#include <stdio.h>
int main ()
{
    int a,b,n;
    scanf("%d",&n);

    for (a=1;a<=n;a++)
    {
        if (a%2==0)
        {
            b=a*a;
              printf("%d^2 = %d\n",a,b);
        }
    }

    }
