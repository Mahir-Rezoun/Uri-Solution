#include <stdio.h>
int main ()
{
    int num,hour;
    float per_hour;
    scanf("%d%d%f",&num,&hour,&per_hour);
    printf("NUMBER =%d\n",num);
   printf("SALARY = U$ %0.2lf\n",hour*per_hour);
    return 0;
}
