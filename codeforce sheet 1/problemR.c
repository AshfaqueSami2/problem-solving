#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
    b=a/365;
    c=a%365;
    d=c/30;
    e=c%30;
    printf("%d years\n%d months\n%d days",b,d,e);



    return 0;
}
