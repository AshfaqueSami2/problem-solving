#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    bool prime = true;
    if(n==0 || n==1)
    {
        prime = false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if( n % i == 0)
        {
            prime = false;
            break;
        }
    }
    if(prime)
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
    
}