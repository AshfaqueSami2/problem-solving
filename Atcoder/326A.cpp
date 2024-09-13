#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int diff1 = x-y;
    int diff2 = y-x;
    if(x>y)
    {
        if(diff1 <= 3)
        {
            cout<<"Yes";
        }
        else cout<<"No";
    }
    else
    {
        if(diff2 <= 2 )
        {
            cout<<"Yes";
        }
        else cout<<"No";
    }
}