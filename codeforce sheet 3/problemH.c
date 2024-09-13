
#include<stdio.h>
int main()
{
    int i,x,y[1010],j,t;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&y[i]);
    }
    for (i=0;i<x-1;i++)
    {
        for(j=0;j<x-1;j++)
        {
          if(y[j]>y[j+1])
          {
              t=y[j];
              y[j]=y[j+1];
              y[j+1]=t;
          }
        }
    }
    for(i=0;i<x;i++)
    {
    printf("%d ",y[i]);
    }
    return 0;
}

