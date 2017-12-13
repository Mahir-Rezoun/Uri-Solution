#include <stdio.h>
int main ()
{ int i,j;
double s;
    for (i=1,j=1;i<=100;i++)
    {
        s=s+i/j;
       j++;
    }

    printf("%.2lf\n",s);
}
