#include<stdio.h>
int main()
{
    int i,x,y[100010];
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&y[i]);
    }
    for(i=0;i<x;i++)
    {
        if(y[i]<=10)
        {
            printf("A[%d] = %d\n",i,y[i]);
        }
    }



    return 0;
}
