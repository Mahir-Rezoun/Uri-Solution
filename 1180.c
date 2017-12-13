#include <stdio.h>
int main ()
{
    int n,i,min=1001,pos;
    scanf("%d",&n);
    int ar[n];

    for (i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

      for (i=0;i<n;i++)
      {
          if (min>ar[i])
          {
              min=ar[i];
              pos=i;
          }
      }
      printf("Menor valor: %d\nPosicao: %d\n",min,i);

}
