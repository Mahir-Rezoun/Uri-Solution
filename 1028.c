#include <stdio.h>
#include <math.h>
int main ()
{
    int a,b,temp,temp1,tes;
    scanf("%d",&tes);

    while (tes--){
     scanf("%d %d",&a,&b);
            if(a<b){
                  temp1=a;
                  a=b;
                  b=temp1;
            }
                  while(a%b!=0){
                        temp=a;
                        a=b;
                        b=temp%b;
                  }
         printf("%d\n",b);
    }
    }



