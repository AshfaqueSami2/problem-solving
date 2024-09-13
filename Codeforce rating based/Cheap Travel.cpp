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

#define Taratari()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void solve()
{
    ll n, m, a, b;
    cin >> n >> m >> a >> b;
    ll ans = n * a;
    ll required = n / m;
    ll for_offer = required * b;
    ll done = required * m;
    ll remain = n - done;
    ll ans2 = for_offer + (remain * a);
    ll ans3 = for_offer + (remain * b);
    cout << min(ans, min(ans2, ans3)) << endl;
}
int main()
{
    Taratari();
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}