#include<stdio.h>
int main()
{
    int i,a,b,c,mod,div,sum=0,sum1=0;
    scanf("%d %d %d",&a,&b,&c);
    for(i=1; i<=a; i++)
    {
        sum = 0;
        div=i;
        while(div!=0)
        {
            mod=div%10;
            div=div/10;
            sum+=mod;
        }

        if(sum>=b && sum<=c)
        {
            sum1+=i;
        }
    }
    printf("%d\n",sum1);

}
