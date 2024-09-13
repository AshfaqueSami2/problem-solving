#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d=0;
    cin>>a>>b>>c;
    for(int i =1;i<=c;i++)
    {
        d += i*a;
       // cout<<d;
    }
    int x = d - b;
    if(x<=0)
    {
        cout<<"0"<<endl;
    }
    else
    cout<<x<<endl;
}