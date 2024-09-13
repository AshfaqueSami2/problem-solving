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
    // int n;
    // cin >> n;
    // string s;
    // cin >> s;
    // int cnt = 0;
    // int start = -1;
    // FOR0(i,n){
    //     if (s[i] == 'B'){
    //         if (start == -1){
    //             start = i; 
    //         }
    //         cnt = i - start + 1; 
    //     }
    // }

    // cout << cnt << endl;
    int n;
    cin>>n;
    string s;
    cin>>s;
    int end = -1; int beg = -1;int cnt =0; int cnt2= 0;
    for (int i = n; i > 0; i--)
    {
        if(s[i] == 'B'){
            end = i; //5 //2
            break;
        }
        else end =0;
    }   
    for (int i = 0; i < n; i++)
    {
        if(s[i] == 'B') {    
            beg = i; //1
            break;  
        } 
        else beg =0;
    }
    
    cout<<(end-beg) +1 <<endl;
    
    
    
    

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    
}

