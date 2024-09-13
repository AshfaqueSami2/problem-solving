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
    string s;
    int n,m = 0,t;
    cin >> s >> n;
    if(s == "January") m = 0;
    else if(s == "February") m = 1;
    else if(s == "March") m = 2;
    else if(s == "April") m = 3;
    else if(s == "May") m = 4;
    else if(s == "June") m = 5;
    else if(s == "July") m = 6;
    else if(s == "August") m = 7;
    else if(s == "September") m = 8;
    else if(s == "October") m = 9;
    else if(s == "November") m = 10;
    else if(s == "December") m = 11;
    n = n % 12;
    t = m+n;
    t = t % 12;
    if(n == 0) cout << s;
    else if(t == 0) cout << "January";
    else if(t == 1) cout << "February";
    else if(t == 2) cout << "March";
    else if(t == 3) cout << "April";
    else if(t == 4) cout << "May";
    else if(t == 5) cout << "June";
    else if(t == 6) cout << "July";
    else if(t == 7) cout << "August";
    else if(t == 8) cout << "September";
    else if(t == 9) cout << "October";
    else if(t == 10) cout << "November";
    else if(t == 11) cout << "December";
}
int main()
{
    Taratari();
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
}