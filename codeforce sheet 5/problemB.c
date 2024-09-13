///SUM
/*
int sum(int x, int y)
{
    int a=x+y;
    return a;
}
*/
#include<stdio.h>
void loop(int x)
{
    int i;
    for(i=1;i<x;i++)
    {
        printf("%d ",i);
    }
    printf("%d",x);
}
int main()
{
    int x;
    scanf("%d",&x);
    loop(x);
    return 0;
}
