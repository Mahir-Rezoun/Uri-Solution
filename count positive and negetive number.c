#include <stdio.h>
int main ()
{
    int n,a,b,c1=0,c2=0;
    printf("How Many Number You Want to Give : ");
    scanf("%d",&n);
    for (a=1;a<=n;a++)
    {scanf("%d",&b);
      if (b>0)
       c1++;
       if (b<0)
        c2++;
    }
     printf("Positive Number: %d\n",c1);
       printf("Negative Number: %d\n",c2);
      return 0;
        }
