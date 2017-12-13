#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);



    if (n%2==0)
    {
        if (n>0)
            printf("EVEN POSITIVE\n");
             else if(n==0)
        printf("NULL");
 else
            printf("EVEN NEGATIVE\n");
    }
    else if (n%2!=0)
    {
        if (n>0)
            printf("ODD POSITIVE\n");
        else
            printf("ODD NEGATIVE\n");
    }

    return 0;
}

