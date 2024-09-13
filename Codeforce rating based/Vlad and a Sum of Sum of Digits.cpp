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



int main()
{
    int t;
    cin >> t;
 
    int max = 200010;
    vector<int> y(max);
 
    for (int i = 1; i < max; ++i) {
        int x = 0;
        int z = i;
        while (z > 0) {
            x += z % 10;
            z /= 10;
        }
        y[i] = y[i - 1] + x;
    }
 
    while (t--) {
        int n;
        cin >> n;
        cout << y[n] << endl;
    }

}
