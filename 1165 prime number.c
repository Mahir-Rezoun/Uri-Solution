#include <stdio.h>
int main ()
{
    int i,n,tes,flag=0,temp;
    scanf("%d",&tes);
    while (tes--)
    {

        scanf("%d",&n);
        temp=n;
        for (i=2;i<n;i++)
        {
            if (n%i==0)
            {
                flag=1;
            }
        }
        if (flag==0)
            printf("%d eh primo\n",temp);
        else  printf("%d nao eh primo\n",temp);
         temp=0,flag=0;
    }
}
