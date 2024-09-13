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

void solve()
{
    int a;
    cin>>a;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int k = s.back() - '0'- 48;
    cout<<k<<endl;
    
    
    

}
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
         solve();
    }
    



}

