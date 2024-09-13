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
    string s1,s2;
    cin >> s1 >> s2;
    int zero = 0, one = 0;
    FOR0(i,s1.length()){
            if(s1[i]=='0' && s2[i]=='0')
            {
                if(s1[i+1]=='1' && s2[i+1]=='1')
                    zero++;
            }
            else if(s1[i]=='1' && s2[i]=='1')
            {
                if(s1[i-1]=='0' && s2[i-1]=='0')
                    one++;
                }
    }
        if(zero>0 || one>0)YES;
        else NO;
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