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
    int n;cin>>n;
    vector< pair<string,string> > v;
    for( int i=0 ; i<n ; i++ )
    {
        string s1, s2;
        cin >> s1 >> s2;
        v.push_back ( {s1, s2} );
    }
    sort( v.begin() , v.end() );
    int size = unique( v.begin(),v.end() ) - v.begin();
    cout << size << endl;
}