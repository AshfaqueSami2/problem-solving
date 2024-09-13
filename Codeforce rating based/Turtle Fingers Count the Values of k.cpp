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

void solve()
{
    int a, b, l;
        cin >> a >> b >> l;

        int ans = 0;

        for (int k = 1; k <= l; ++k) {
            for (int x = 0; pow(a, x) <= l/k; ++x) {
                for (int y = 0; pow(b, y) <= l/k; ++y) {
                    if (k * pow(a, x) * pow(b, y) == l) {
                        ans++;
                        break;
                    }
                }
            }
        }

        cout << ans << endl;
    
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // solve();
}