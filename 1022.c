#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    e=c+d;
    f=a+b;


    if((b>c)&&(d>a)&&(e>f)&&(c&&d)>0&&(a%2)==0)
    {

                printf("Valores aceitos");

                }



    else
        {
            printf("Valores nao aceitos");}
    return 0;
}
