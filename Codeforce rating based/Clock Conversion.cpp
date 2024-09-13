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


int main()
{
    Taratari();
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
    cin>>s;
    int hr = (s[0] - '0')*10 + (s[1] - '0');
    if (hr == 0) { 
            cout << "12" << ":" << s[3] << s[4] << " AM" << endl;
            continue;
    }
    string store = "";
    if(hr >= 12){
        store = " PM";
    }
    else store = " AM";
    if(hr>12){
        hr = hr - 12;
    }
     if (hr <= 9) {
            cout << "0" << hr << ":" << s[3] << s[4] << store;
        } else {
            cout << hr << ":" << s[3] << s[4] << store; 
        }
        cout << endl; 
    }
    // solve();
}
