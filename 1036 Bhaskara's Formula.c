#include <stdio.h>
#include<math.h>
int main ()
{
    float a,b,c,x1,x2,del;
    scanf("%f %f %f",&a,&b,&c);
    del= b*b-(4*a*c);
    x1= (-b+sqrt(del))/(2*a);
         x2= (-b-sqrt(del))/(2*a);


            if(a!=0 && del>0)
{

        printf("R1 = %.5lf\nR2 = %.5lf\n",x1,x2);

    }

    else printf("Impossivel calcular\n");

    return 0;

}
