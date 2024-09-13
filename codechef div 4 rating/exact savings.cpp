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
   ll n,x,z;
   cin>>n>>x>>z;
   vector<ll> gift(n);
   FOR0(i,n){ 
    cin>>gift[i];
   }
   ll hour = 0, saving =0;
   FOR0(i,n){
    if(saving + gift[i]<=z){ //2 
        saving+=gift[i]; // 2
        hour++; // 1 
    }
   }
   ll remain = z - saving; // 12 - 2 =10
   if(remain<=x && hour<=n){ //4<=5 // 3=3
    cout<<hour<<endl; // 3
   }
   else
   minus_one;
   

}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

