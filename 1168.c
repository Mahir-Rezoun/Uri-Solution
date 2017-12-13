#include <stdio.h>
int main ()
{
    int a,b,q,r;
    while(scanf("%d%d",&a,&b)!=EOF)
{
      q=a/b;
    r=a%b;
    printf("%d %d\n",q,r);
}

}
