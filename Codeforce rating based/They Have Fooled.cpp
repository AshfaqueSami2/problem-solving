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

void solve()
{
    int n;
    cin>>n;
    /*
    0 --- 10
    1 --- 10
    2 --- 
    3 --- 
    4 --- 
    5 --- 7
    6 --- 
    7 --- 
    8 --- 
    9 --- 0
    10 --- 
    11 --- 
    12 --- 8
    
    
    */
    
    if(n==0 || n==1){
        cout<<"10"<<endl;
    }
    else if(n == 2){
        cout<<"0"<<endl;
    }
    else if(n == 3){
        cout<<"7"<<endl;
    }
    else if( n == 4){
        cout<<"8"<<endl;
    }
    else if( n == 5){
        cout<<"5"<<endl;
    }
    else if( n == 6){
        cout<<"8"<<endl;
    }
    else if( n == 7){
        cout<<"6"<<endl;
    }
    else if(n == 8){
        cout<<"6"<<endl;
    }
    else if(n==9){
        cout<<"8"<<endl;
    }
    else if(n == 10){
        cout<<"7"<<endl;
    }
    else if(n == 11){
        cout<<""<<endl;
    }
    else if( n== 12){
        cout<<""<<endl;
    }
}
int main()
{
    Taratari();
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
}