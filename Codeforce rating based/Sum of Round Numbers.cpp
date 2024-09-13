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
    int n, m[10], i = 0;
    cin >> n;
    if (n >= 10000)
    {
        i++;
        m[i] = n / 10000 * 10000;
        n %= 10000;
    }
    if (n >= 1000)
    {
        i++;
        m[i] = n / 1000 * 1000;
        n %= 1000;
    }
    if (n >= 100)
    {
        i++;
        m[i] = n / 100 * 100;
        n %= 100;
    }
    if (n >= 10)
    {
        i++;
        m[i] = n / 10 * 10;
        n %= 10;
    }
    if (n > 0)
    {
        i++;
        m[i] = n;
    }

    cout << i << endl;
    for (int j = 1; j <= i; j++)
        cout << m[j] << " ";
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