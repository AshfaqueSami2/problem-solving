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
    string s;
    cin>>s;
    int cnt =0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '.' && s[i+1] == '.' && s[i+2] == '.'){
            cout<<"2"<<endl;
          return;
        }
        else{
            if(s[i] =='.')
            {
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    
    
}

int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
