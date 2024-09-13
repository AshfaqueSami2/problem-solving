//20%
#include<stdio.h>
int main()
{
    int i,x,y,count=0;
    scanf("%d%d",&x,&y);
    int z[110];
    for(i=0;i<x;i++)
    {
        scanf("%d",&z[i]);
    }
    for(i=0;i<x;i++)
    {
        if(z[i]>=z[y-1] && z[i]>0)
        {
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}
