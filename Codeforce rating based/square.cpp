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
   int hi = sqrt(pow(max(x[0],max(x[1],max(x[2],x[3])))-min(x[0],min(x[1],min(x[2],x[3]))),2));
   int wi = sqrt(pow(max(y[0],max(y[1],max(y[2],y[3])))-min(y[0],min(y[1],min(y[2],y[3]))),2));
   int area = hi*wi;
   cout<<area<<endl;

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

