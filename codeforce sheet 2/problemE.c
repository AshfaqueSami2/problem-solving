#include<stdio.h>
int main()
{
    int a,i,x,max=-1;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&x);
        if(x>max)
        {
            max=x;
        }
    }
    printf("%d",max);
    return 0;
}

