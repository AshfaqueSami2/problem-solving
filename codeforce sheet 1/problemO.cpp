#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f;
    char s;
    cin>>a>>s>>b;
    if(s=='+')
    {
        c = a+b;
       cout<<c;
    }
    else if(s=='-')
    {
        d = a-b;
        cout<<d;
    }
    else if(s=='*')
    {
        e = a*b;
        cout<<e;
    }
    else if(s=='/')
    {
        f = a/b;
       cout<<f;
    }
    return 0;
}