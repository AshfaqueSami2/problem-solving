#include<stdio.h>
int main()
{
    int x,n;
    scanf("%d",&x);
    for ( int i =0;i<x;i++)
    {
        scanf("%d",&n);
        if(n>0 && n<=10)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }




    return 0;
}
