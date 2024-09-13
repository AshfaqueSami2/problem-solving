#include<stdio.h>
int main()
{
    long long i,a,b,c,d;
    scanf("%lld",&a);
    for(i=1; i<=a; i++)
    {
        scanf("%lld",&b);
        d=1;
        for(c=1; c<=b; c++)
        {
            d = d*c;
        }
        printf("%lld\n",d);
    }
    return 0;
}
