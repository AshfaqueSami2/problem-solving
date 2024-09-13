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
   int x[4],y[4];
   for (int i = 0; i < 4; i++)
   {
    cin>>x[i]>>y[i];
   }
   int d1 = ((x[0]-x[1])*(x[0]-x[1]) + (y[0]-y[1])*(y[0]-y[1]));
   int d2 = ((x[2]-x[3])*(x[2]-x[3]) + (y[2]-y[3])*(y[2]-y[3]));
   int res = (d1+d2)/2;
   cout<<res<<endl; 
   
}
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
         solve();
    }
   // solve();
}

