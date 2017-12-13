#include <stdio.h>
int main ()
{
    int tes,i,j,a=1,b=4;
    scanf("%d",&tes);
    {
        for (i=1;i<=tes;i++)
        {
            for (j=a;j<b;j++)
            {
                printf("%d ",j);

            }
            printf("PUM");
            printf("\n");

b=b+4;

        }
    }
}
