#include<stdio.h>
int main()
{
    int x,rev,m;
    scanf("%d",&x);
    rev=0;
    m=x;
    while(m>0)
    {
        rev=rev*10+(m%10);
        m/=10;
    }
    printf("%d\n",rev);
    if(x==rev)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
    return 0;
}

