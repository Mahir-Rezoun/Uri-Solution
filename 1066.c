#include <stdio.h>
int main()
{
    int a,n,p2=0,n2=0,e=0,o=0;

    for (a=1;a<=5;a++)
    {
        scanf("%d",&n);
        if (n%2==0)
            e++;
        if(n%2!=0)
            o++;
        if (n>0)
            p2++;
            if (n<0)
                n2++;

    }
    printf("%d valor(es) par(es)\n",e);
    printf("%d valor(es) impar(es)\n",o);
    printf("%d valor(es) positivo(s)\n",p2);
    printf("%d valor(es) negativo(s)\n",n2);
    return 0;
}
