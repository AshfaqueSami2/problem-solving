#include<stdio.h>
int main()
{
    int x,a,b,c,d,i;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(a+b+c<d || b+c+d<a || c+d+a<b || a+b+d<c )
        {
            printf("yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}
