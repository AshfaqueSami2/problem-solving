#include<stdio.h>
int main()
{
    long long a,b,c,d,e;
    scanf("%lld%lld",&a,&b);
    c=a%10;
    d=b%10;
    e=c+d;
    printf("%lld\n",e);
    return 0;
}
