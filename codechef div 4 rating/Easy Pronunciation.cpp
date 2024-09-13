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
    char cons[21] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    bool hard = false;
    for (int i = 0; i < n; i++) {
        bool consnt = false;
        for (char c : cons) {
            if (s[i] == c) {
                consnt = true;
                break;
            }
        }
        if (consnt) {
            cnt++;
            if (cnt >= 4) {
                hard = true;
                break;
            }
        } else {
            cnt = 0; 
        }
    }

    if (hard) {
       NO;
    } else {
        YES;
    }
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


