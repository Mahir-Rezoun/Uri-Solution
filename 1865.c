#include <stdio.h>
int main ()
{
    int tes,c;
            char str[1000];
    scanf("%d",&tes);
while (tes--)

    {
        scanf("%s",str);
        scanf("%d",&c);
        if (str[0]=='T' && str[1]=='h' && str[2]=='o' && str[3]=='r')
            printf("Y\n");
        else printf("N\n");

    }
    return 0;
}
