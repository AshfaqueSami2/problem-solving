


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
    dbl h, x, y1, y2, k;
    cin>>h>>x>>y1>>y2>>k;
    int mini = 1000000000;
        int q = ceil(h / x);

        if ((h / y1) >= k) {
            int e = k + ceil((h - k * y1) / y2);
            mini = min(q, e);
        } else {
            int e = ceil(h / y1);
            mini = min(q, e);
        }

        cout << mini << endl;
    }

int main()
{
   ll t=1;
   cin>>t;
   while(t--){
    solve();
   }
    
}

