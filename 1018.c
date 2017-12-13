#include <stdio.h>
int main ()
{
    float n;
    scanf("%f",&n);

    printf("NOTAS:\n",n);

    printf("%f nota(s) de R$ 100,00\n",n/100);
    n%=100;

    printf("%f nota(s) de R$ 50,00\n",n/50);
        n%=50;

    printf("%f nota(s) de R$ 20,00\n",n/20);
     n%=20;

      printf("%f nota(s) de R$ 10,00\n",n/10);
       n%=10;

        printf("%f nota(s) de R$ 5,00\n",n/5);
            n%=5;

          printf("%f nota(s) de R$ 2,00\n",n/2);
            n%=2;

            printf("%f nota(s) de R$ 1,00\n",n/1);
                      n%=1;


                      printf("MOEDAS:\n",n);
    printf("%f moeda(s) de R$ 100,00\n",n/1);
    n%=1;

    printf("%f moeda(s) de R$ 50,00\n",n/0.50);
        n%=0.50;

    printf("%f moeda(s) de R$ 20,00\n",n/0.25);
     n%=0.25;

      printf("%f moeda(s) de R$ 10,00\n",n/0.10);
       n%=0.10;

        printf("%f moeda(s) de R$ 5,00\n",n/0.05);
            n%=0.05;

          printf("%f moeda(s) de R$ 2,00\n",n/0.01);
            n%=0.01;


            return 0;

}
