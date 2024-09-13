#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dbl;

//shortcut
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define yes cout << "yes" << endl
#define no cout << "no" << endl
#define minus_one cout << -1 << endl
#define nl cout<<endl

// Loop 
#define FOR0(i,n) for(int i = 0; i < n; i++) // 0 based indexing
#define FOR1(i,n) for(int i = 1; i <=n; i++) // 1 based indexing

// Reverse a number 
ll reverse_num(ll n)
{
    ll tmp = n, ans = 0, r;
    while (tmp)
    {
        r = tmp % 10;
        ans = ans * 10 + r;
        tmp /= 10;
    }
    return ans;
}
// find GCD
ll gcd(ll num1, ll num2)
{
    ll a, b, r;
    a = num1;
    b = num2;
    r = a % b;
    while (r > 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}
// find LCM
ll lcm(ll num1, ll num2) 
{
     return (num1 * num2) / gcd(num1, num2); 
}
  //Time limit exceed
void solve()
{
  ll n,x,y;
  cin>>n>>x>>y;

//   ll total = n ; 
//   FOR0(i,n){
//     if(x>=1 && y>=3)
//     {
//         x--;
//         y-=3;
//         total--;
//     }
//     else if(x>=2)
//     {
//         x-=2;
//         total--;
//     }
//     else
//      break;
//   }
//   if(total == 0)
//   YES;
//   else NO;

  
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

