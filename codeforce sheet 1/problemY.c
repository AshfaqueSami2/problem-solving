#include<stdio.h>
int main()
{
    long long a,b,c,d,e,f,g,h,i,j,k;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    a = a%100;
    b = b%100;
    c = c%100;
    d = d%100;
    e = a%100;
    f = b%100;
    g = c%100;
    h = d%100;
    i = (e*f)%100;
    j = (g*h)%100;
    k = (i*j)%100;
    if(k<9)
    {
      printf("0%lld",k);
    }
    else{
    printf("%lld",k);}
    return 0;
}
