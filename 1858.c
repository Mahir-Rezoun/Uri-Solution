#include <stdio.h>
int main ()
{
    int i,n,min=1001,pos,a;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if (min>a)
        {
            min=a;
            pos=i;
        }
    }
    printf("%d",pos);
}
