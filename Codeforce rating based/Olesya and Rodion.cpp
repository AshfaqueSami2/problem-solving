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

//

int main()
{
    // int t =1;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }
    int n, t;
    cin >> n >> t;

    for (int i = pow(10, n - 1); i < pow(10, n); i += t)
    {
        if (i % t == 0)
            cout << i << endl;
        break;
    }
}
