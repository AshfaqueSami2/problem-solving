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
    
    

    
}

int main()
{
   ll t=1;
   cin>>t;
   while(t--){
    //solve();
     ll a,b,c,d,e;
     cin>>a>>b>>c>>d>>e;
     ll res1 = 1;
     ll res2 = 1;
     if(e == 1){
        cout<<a*b<<endl;
        continue;
    }
    res1+=(c-1)/e + (a-c)/e ;
    res2+=(d-1)/e + (b-d)/e ;
    cout<< res1 * res2 <<endl;
   }
// solve();
    
}

    