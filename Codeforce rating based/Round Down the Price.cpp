#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dbl;

//shortcut
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define yes cout << "yes" << endl
#define no cout << "no" << endl
#define minus_one cout << -1 << endl
#define nl cout<<endl

// Loop 
#define FOR0(i,n) for(int i = 0; i < n; i++) // 0 based indexing
#define FOR1(i,n) for(int i = 1; i <=n; i++) // 1 based indexing

void solve() {
        ll n;
        cin>>n;
        string s = to_string(n);
        ll s_len = s.length();
        if(s_len == 1) cout << n - 1 << endl;
        else if(s_len == 2) cout << n - 10 << endl;
        else if(s_len == 3) cout << n - 100 << endl;
        else if(s_len == 4) cout << n - 1000 << endl;
        else if(s_len == 5) cout << n - 10000 << endl;
        else if(s_len == 6) cout << n - 100000 << endl;
        else if(s_len == 7) cout << n - 1000000 << endl;
        else if(s_len == 8) cout << n - 10000000 << endl;
        else if(s_len == 9) cout << n - 100000000 << endl;
        

    }

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    
}

