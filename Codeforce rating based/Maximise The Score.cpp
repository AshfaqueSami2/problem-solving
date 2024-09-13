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
    ll main_size = 2*n;
    ll arr[main_size + 10];
    for (ll i = 0; i < main_size; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+main_size);
    ll res = 0;
    for (ll i = 0; i < main_size; i+=2)
    {
        res+=arr[i];
    }
    cout<<res<<endl;
    
    
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    
}

