#include <stdio.h>
int main ()
{int i,n,sum,tes,temp;
    scanf("%d",&tes);
    while (tes--)
    {
        scanf("%d",&n);
        temp=n;
        sum=0;
        for (i=1; i<n; i++)
        {
       if (n%i==0)
            {
                sum=sum+i;
            }
        }

        if (sum==temp)
        {
            printf("%d eh perfeito\n",temp);
        }
        else  printf("%d nao eh perfeito\n",temp);
        temp=0;
    }
}
