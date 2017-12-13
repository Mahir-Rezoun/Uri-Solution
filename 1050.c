#include <stdio.h>
#include <string.h>
int main ()
{
char a[100];
gets(a);

if (strcmp(a,"61")==0)
    printf("Brasilia");
else if  (strcmp(a,"71")==0)
    printf("Salvador");
    else if  (strcmp(a,"11")==0)
    printf("Sao Paulo");
    else if  (strcmp(a,"21")==0)
    printf("Rio De Janeiro");
    else if  (strcmp(a,"32")==0)
    printf("Juiz De Fora");
    else if  (strcmp(a,"19")==0)
    printf("Campinas");
    else if (strcmp(a,"27")==0)
         printf("Vitoria");
         else if(strcmp(a,"31")==0)
            printf("Belo Horizonte");
            else printf("DDD nao cadastrado");
            printf("\n");

    return 0;

}
