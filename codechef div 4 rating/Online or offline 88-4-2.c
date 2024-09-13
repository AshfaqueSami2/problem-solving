#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i =0 ; i<x;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        double on_cost=a*0.9;

        if(on_cost<b)
        {
            printf("ONLINE\n");
        }
        else if(on_cost>b)
        {
            printf("DINING\n");
        }
        else
        {
            printf("EITHER\n");
        }
    }

    return 0;
}

