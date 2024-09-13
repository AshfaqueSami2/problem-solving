#include<stdio.h>
int main()
{
    int i,x,y[10010];
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&y[i]);
    }
   for(i=x-1;i>=0;i--)
   {
       printf("%d ",y[i]);
   }
    return 0;
}

