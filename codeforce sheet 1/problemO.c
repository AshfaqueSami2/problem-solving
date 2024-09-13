#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    char s;
    scanf("%d%c%d",&a,&s,&b);
    if(s=='+')
    {
        c = a+b;
        printf("%d",c);
    }
    else if(s=='-')
    {
        d = a-b;
        printf("%d",d);
    }
    else if(s=='*')
    {
        e = a*b;
        printf("%d",e);
    }
    else if(s=='/')
    {
        f = a/b;
        printf("%d",f);
    }

    return 0;
}
