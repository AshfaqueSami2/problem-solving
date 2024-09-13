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
    ll scr[22][2];
    for (int i = 0; i < 22; i++)
    {
        cin>>scr[i][0]>>scr[i][1];
    }
    int mxscr = -1, mom = -1;
    for (int i = 0; i < 22; i++)
    {
        int main_score = ((scr[i][0] * 1) +(scr[i][1] * 20 ));
        if(main_score > mxscr){
            mxscr = main_score;
            mom = i+1;
        }
    }
    cout<<mom<<endl;
    
    

    
}

int main()
{
   ll t=1;
   cin>>t;
   while(t--){
    solve();
   }
// solve();
    
}


