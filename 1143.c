#include <stdio.h>
int main()
{
    int a,c,i,j,b,d=1;
    scanf("%d",&a);
    for (i=1; i<=a; i++)
    {

        for (j=1; j<=3; j++)
        {

            printf("%d ",j*j);

        }

        printf("\n");
    }
}
