#include <stdio.h>
main (void)
{
    int d,i,a,b;
    double c;

    scanf("%d",&d);
    for (i=1;i<=d;i++)
    {
        scanf("%d %d",&a,&b);
        if (b==0)
            {printf("divisao impossivel\n");
            }
        else printf("%.1lf\n",c=a/b);
    }
    return 0;
}
