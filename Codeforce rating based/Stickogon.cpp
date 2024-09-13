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
    int n;
    cin >> n;
    vector<int> sticks(n);
    vector<int> freq(101, 0);
    FOR0(i,n){
        cin >> sticks[i];
        freq[sticks[i]]++;
    }
    int cnt = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (freq[i] >= 3)
        {
            cnt += freq[i] / 3.0;
        }
    }

    cout << cnt << endl;
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