#include<stdio.h>
int main()
{
    int x,a,b;
    scanf("%d",&x);
    for(int i =0;i<x;i++)
    {
        scanf("%d%d",&a,&b);
        if(b>=(a+1)/2)
        {
            printf("yes\n");
        }
        else
            printf("No\n");

        }

return 0;
}
