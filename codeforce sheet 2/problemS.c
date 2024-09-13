#include<stdio.h>
int main()
{
    int a,x,y,i,j,t,sum;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d%d",&x,&y);
        if(x>y)
        {
            t=x;
            x=y;
            y=t;
        }
        sum=0;
        for(j=x+1;j<y;j++)
        {
            if(j%2!=0)
        {
            sum=sum+j;
            }
        }
         printf("%d\n",sum);
    }
    return 0;
}
