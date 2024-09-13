
#include<stdio.h>
int main()
{
    int i,x,y[1010],z[1010],j,f=1;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&y[i]);
    }
    for (i = 0; i < x; i++)
    {
        z[i] = y[x - i - 1];
    }
    for (i = 0; i < x; i++)
    {
        if (y[i] != z[i])
        {
            f = 0;
            break;
        }
    }
    if (f == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
