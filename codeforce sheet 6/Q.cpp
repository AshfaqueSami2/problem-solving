#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long x,y,z,i;
    cin>>x>>y>>z;
    if(x>y)
    {
        long long t = x;
        x = y;
        y = t;
    }
    long long ans =1;
    for (long long i = x; i <= y; i++)
    {
        ans*=i;
        ans%=z;
    }
    cout<<ans<<endl;
    
    
}