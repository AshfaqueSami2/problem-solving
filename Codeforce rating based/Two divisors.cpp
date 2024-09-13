#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) 
{
    while (b) 
    {
        a%=b;
        swap(a, b);
    }
    return a;
}
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
    long long a, b;
    cin>>a>>b;
    long long ans = (a * b)/gcd(a,b);
    // i donno how did i solve this :) bt i did . damn ... just doing some rough experiment .. sorry codeforce..
    if(ans == b)
    {
        cout<<ans * (b/a)<<endl;
    }
    else
        cout << ans <<endl;
    }

}
