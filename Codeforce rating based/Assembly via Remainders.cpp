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

#define Taratari()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void solve()
{
    int n;
    cin >> n;
    int arr1[n], arr2[n];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr1[i];
    }
    arr2[0] = 501;
    for (int i = 1; i < n; i++)
    {
        arr2[i] = arr1[i - 1] + arr2[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
}

int main()
{
    Taratari();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}