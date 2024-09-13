#include<stdio.h>
int main()
{
    int i,x,y[1000],min,position;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&y[i]);
    }
    min = y[0];
    position = 0;
    for(i=1;i<x;i++)
    {
        if(y[i]<min)
        {
            min = y[i];
            position = i;
        }
    }

    printf("%d %d\n",min,position+1);

    return 0;
}
