#include <stdio.h>
int main ()
{
    int x;
    float y;
    scanf("%d %f",&x,&y);
    printf("%.3lf km/l\n",x/y);
    return 0;
}
