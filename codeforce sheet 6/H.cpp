/* wrong ans with out using function
#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
    long long x,y;
    cin>>x>>y;
    long long gcd =0;
    while(y!=0)
    {
        long long t = x;
        x = y;
        y = t % x; 
    }
    gcd = x;
    long long lcm = (x / gcd) * y;
    cout<<gcd<<" "<<lcm<<endl;
}
*/
#include<iostream>
#include<math.h>
using namespace std;
long long gcd(long long x,long long y)
{
    while(y!=0)
    {
        long long t = x;
        x = y;
        y = t % x;
    }
    return x;
}
long long lcm(long long x,long long y)
{
    long long value = (x/gcd(x,y))*y;
    return value;
}
int main ()
{
   long long x,y;
   cin>>x>>y;
   cout<<gcd(x,y)<<" "<<lcm(x,y)<<endl; 
}