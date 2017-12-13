#include<stdio.h>
int main ()
{
    int a,b,d,e;
    float c,f;
    scanf("%d %d %f",&a,&b,&c);
    scanf("%d %d %f",&d,&e,&f);
    printf("VALOR A PAGAR: R$ %.2lf\n",b*c+e*f);
    return 0;
}
