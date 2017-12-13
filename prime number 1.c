#include <stdio.h>
int main ()
{
    int n,i;
    printf ("Enter a Number : ");
    scanf("%d",&n);

    for (i=2;i<=n;i++)
    {
        if (n%i==0)
        {
            printf ("Not Prime Number\n");
            break;}
else
{
 printf ("Prime Number");
 break;
}
    }
   return 0;
}
