#include <stdio.h>
int main ()
{
    int hour,minute,second;
    scanf("%d",&second);
    hour=second/3600;
    second=second%3600;
    minute=second/60;
    second=second%60;
    printf("%d:%d:%d\n",hour,minute,second);
    return 0;
}


/*#include <stdio.h>
int main ()
{
    int year,day,month;
    scanf("%d",&day);

 year=day/365;
 day=day%365;
 month=day/30;
 day=day%30;
 printf("year=%d day = %d month %d",year,day,month);
 return 0;
}
*/
