#include <stdio.h>
int main ()

{
    float i=0,n,sum=0;
    scanf("%f",&n);
    while (n>0)
    {
      sum+=n;
        scanf("%f",&n);
        i++;
    }
      printf("%.2f\n",sum/i);
}
