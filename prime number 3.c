#include <stdio.h>
#include <math.h>
int  main ()

{
    int n,i,p;
    printf("Enter a Number : ");
    scanf("%d",&n);

    p= sqrt(n);

    for (i=2;i<=n;i++)
    {

        {


        if (n%i==0)
        {
            printf ("Not Prime Number",p);
            break;
        }
        else printf("Prime Number",p);
        break;
        }
    }
    return 0;
}
