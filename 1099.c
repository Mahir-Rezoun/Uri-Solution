#include <stdio.h>
int main ()
{
    int a,b,n,m,c,d;


    scanf("%d",&n);
    for (m=1;m<=n;m++)
    {
       scanf("%d %d",&a,&b);

       if (a==b)
       {
           c=0;
           printf("%d",c);
       }
       else if (a<b)
       {
           for (d=a+1,c=0;c<b;c++)
           {
               if (d%2==1 ||d%2==-1)
                c=c+d;
           }
           printf("%d",c);
       }
       else
        {
            for(d=b+1,c=0;d<a;d++)
            {
                if(d%2==1||d%2==-1)
                    c+=d;
            }
            printf("%d\n",c);
        }
    }
    return 0;

    }


