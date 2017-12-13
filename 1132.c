#include <stdio.h>
int main (void)
{
    int i,j,sum=0;
    scanf("%d %d",&i,&j);

    if (i>j)
    {
        for (i;i<=j;i++)
    {  if (i%13!=0)
        {
            sum+=i;
        }
    }
    printf("%d\n",sum);
}
    else
         {for (j;j<=i;j++)
    {  if (j%13!=0)
        {
            sum+=j;
        }
    }

    printf("%d\n",sum);
    }

        return 0;
}
