#include <stdio.h>
int main()

{
     long long int a,b,sum=0,i;
     scanf("%lld %lld",&a,&b);

     for (i=a;i<=b;i++)
     {
         sum+=i;
         a++;
     }
     printf("%lld\n",sum);
}
