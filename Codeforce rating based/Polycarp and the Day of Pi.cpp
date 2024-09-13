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

void solve()
{
    string s;
    cin>>s;
    int arr[] = {3,1,4,1,5,9,2,6,5,3,5,8,9,7,9,3,2,3,8,4,6,2,6,4,3,3,8,3,2,7,9};
    int cnt = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] - '0' == arr[i]){
            cnt++;
        }
        else break;
        
    }
    cout<<cnt<<endl;
    
    
   
}
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
         solve();
    }
}

