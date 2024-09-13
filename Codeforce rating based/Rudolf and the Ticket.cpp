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
    int n, m, k;
    cin >> n >> m >> k;
    int lc[1000], rc[1000];

    FOR0(i,n){
    cin >> lc[i];
    }
    FOR0(j,m){
    cin >> rc[j];
    }
    int cnt = 0;
    FOR0(i,n){
    FOR0(j,m){
    if (lc[i] + rc[j] <= k)
            {
                cnt ++;
            }
    }
    }

    cout << cnt << endl;
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
