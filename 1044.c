#include <stdio.h>
int main ()
{
    int i,n;
    scanf("%d%d",&i,&n);

    if (n%i==0 ||i%n==0)
    {
        printf("Sao Multiplos\n");
    }
    else {printf("Nao sao Multiplos\n");}
    return 0;

}
