
#include <stdio.h>
#include <math.h>
long long eq(long long x,long long y)
{
    long long cal=-1;
    for(long long i=0;i<=y;i+=2)
    {
        cal += pow(x,i);
    }
    return cal;
}
int main()
{
    long long x,y;
    scanf("%lld%lld",&x,&y);
    long long cal = eq(x,y);
    printf("%lld\n",cal);
    return 0;
}
