#include<stdio.h>
int main()
{
    int i,x,y[100010],z,position=-1;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&y[i]);
    }
    scanf("%d",&z);
    for(i=0;i<x;i++)
    {
        if(y[i] == z)
        {
            position = i;
            break;
        }
    }
    printf("%d\n",position);





    return 0;
}
