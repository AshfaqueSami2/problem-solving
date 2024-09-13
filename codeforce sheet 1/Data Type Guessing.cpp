#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dbl;

// shortcut
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define yes cout << "yes" << endl
#define no cout << "no" << endl
#define minus_one cout << -1 << endl
#define nl cout << endl

// Loop
#define FOR0(i, n) for (int i = 0; i < n; i++)  // 0 based indexing
#define FOR1(i, n) for (int i = 1; i <= n; i++) // 1 based indexing

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
    dbl num1,num2,num3;
	cin>>num1>>num2>>num3;
	dbl result = (num1*num2) / num3;     
	ll myNumber = result;           
	dbl myRes = result - myNumber;      
	if(myRes > 0){
		cout<<"double"<<endl;
	}
    else if(myNumber <= 2147483647){
		cout<<"int"<<endl;
	} 
    else {
		cout<<"long long"<<endl;
	}

}
int main()
{
    // ll t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    solve();
}
