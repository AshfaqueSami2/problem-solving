#include<stdio.h>
int main()
{
    int i,x,y[100010];
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&y[i]);
        if(y[i]<0)
        {
            printf("2 ");
        }
        else if(y[i]>0)
        {
            printf("1 ");
        }
        else
        {
            printf("0 ");
        }
    }



    return 0;
}

