#include <stdio.h>
long long fact (int n)
{
    long long  fact1=1,i;
    for (i=1; i<=n; i++)
    {
        fact1*=i;
    }
    return fact1;
}

int main()
{
    int n1,n2;

    while(scanf("%d%d",&n1,&n2)!=EOF)

        if (n1<=20 && n1>=0 && n2<=20 && n2>=0)
        {
            printf("%lld\n",fact(n1)+fact(n2));
        }
}
