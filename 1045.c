#include <stdio.h>
int main ()
{
    float a,b,c;
    scanf ("%f%f%f",&a,&b,&c);


    if (a>=b+c)
        printf("NAO FORMA TRIANGULO\n");
if (a*a==b*b+c*c)
        printf("TRIANGULO RETANGULO\n");
       if (a*a>b*b+c*c)
        printf("TRIANGULO OBTUSANGULO\n");
         if (a*a<b*b+c*c)
            printf("TRIANGULO ACUTANGULO\n");
             if (a==b==c)
                printf("TRIANGULO EQUILATERO\n");
                if (a==b!=c)
                    printf("TRIANGULO ISOSCELES\n");
                       if (a!=b==c)
                        printf("TRIANGULO ISOSCELES\n");
                        return 0;

}
