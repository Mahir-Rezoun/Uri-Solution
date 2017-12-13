#include <stdio.h>
int main ()
{
    int i,n,a;

  while(scanf("%d",&n)!=EOF)
{if ( n>=1 && n <= 500)
  {

  int c=0,d=0,e=0;
      for (i=1;i<=n;i++)
      {scanf("%d",&a);
if ( a>=1 && a<= 50)

      if (a<=10)
          c++;
      else if (a>10 && a<20)
        d++;
      else if (a>=20)
        e++;

      }
      if (c>0 && d>0 && e>0)
        printf("3\n");
      else if (c>0 && d>0 ||  d>0 && e>0 || c>0 && e>0)
        printf("2\n");
      else if (c>0 || d>0 || e>0)
        printf("1\n");

  }
}
}

