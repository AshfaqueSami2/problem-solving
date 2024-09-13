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
    int n;
    cin>>n;
    if(n == 27){
        cout<< "aay"<<endl;
    }  
    else if (n == 78) {
    cout << "zzz" << endl;
    } else if (n < 78 && n > 52) {
    cout << char(n - 52 + 96) << "zz" << endl;
    }  else if (n <= 52 && n > 26) {
    cout << "a" << char(n - 1 - 26 + 96) << "z" << endl;
    } else if (n <= 26 && n > 0) {
    cout << "aa" << char(n - 2 + 96) << endl;
    }
    }

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    
}


        