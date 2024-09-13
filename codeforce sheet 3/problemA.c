#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long m[100000],x,sum=0,i,a;
    scanf("%lld",&x);
    for(i=0;i<x;i++)
    {
        scanf("%lld",&m[i]);
    }
    for(i=0;i<x;i++)
    {
        sum+=m[i];
    }
    if(sum<0)
    {
       a = abs(sum);
       printf("%lld",a);
    }
    else
        printf("%lld",sum);

    return 0;
}
