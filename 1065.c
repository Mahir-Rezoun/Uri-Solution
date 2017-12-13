#include <stdio.h>
int main ()
{
    int n,a,b=0;

    for (a=1;a<=5;a++)
    {
        scanf("%d",&n);
        if(n%2==0)
            b++;
    }

    printf("%d valores pares\n",b);
    return 0;
}
