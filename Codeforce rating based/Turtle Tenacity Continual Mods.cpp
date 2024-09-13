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
    int n;
    cin>>n;
    vector<int>arr(n);
    FOR0(i,n){
        cin>>arr[i];
    }
    bool even = true;
        for (int i = 0; i < n; ++i) {
            if (arr[i] % 2 != 0) {
                even = false;
                break;
            }
        }
        if (!even) {
            for (int i = 0; i < n; ++i) {
                if (arr[i] % 2 != 0) {
                    swap(arr[0], arr[i]);
                    break;
                }
            }
        }
    if (arr[0] == arr[n - 1] || arr[0] == arr[1]) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    
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
