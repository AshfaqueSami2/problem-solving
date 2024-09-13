
#include<iostream>
using namespace std;
int main()
{
    long long x;
    cin>>x;
    if(x%2 == 0)
    {
        cout<<x/2;
    }
    else if(x%2 != 0)
    {
        cout<<(x/2)-x;
    }
}