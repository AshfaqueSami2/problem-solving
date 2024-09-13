#include <stdio.h>
int main()
{
    int x,i,y,sum=0;
    scanf("%d%d",&x,&y);
    while(y<=0)
    {
        scanf("%d",&y);
    }
    for(i=1;i<=y;i++)
    {
        sum+= x+i;
    }
    printf("%d\n",sum);
    return 0;
}

