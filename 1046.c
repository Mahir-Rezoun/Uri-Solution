#include <stdio.h>
int main()

{
    int start,end,rt;
    scanf("%d %d",&start,&end);

rt=end-start;

if (rt<0)
{
    rt=24+(end-start);
}
if (start==end)
{
    printf("O JOGO DUROU 24 HORA(S)");
}
else printf("O JOGO DUROU %d HORA(S)",rt);
printf("\n");
return 0;
}
