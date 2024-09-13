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
#define Taratari() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
    ll in,ex,uni;
    cin>>in>>ex>>uni;
    ll ans = in;
    ans+=(ex/3);
    ex = ex%3;
    if((ex+uni)<3 && ex>0){
        minus_one;return;
    }
    ans+=(ex+uni)/3;
    if((ex+uni)%3){
        ans++;
    }
    cout<<ans<<endl;

    
}

int main()
{
    Taratari();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // solve();
}
