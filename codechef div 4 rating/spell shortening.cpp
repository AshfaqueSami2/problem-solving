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
    ll onelen , non_index=-1;
    cin>>onelen;
    string input;
    cin>>input;
    string output = "";
    for (int i = 0; i < onelen - 1; i++) {
            if (input[i] > input[i + 1]) {
                non_index = i;
                break;
            }
        }
        if (non_index == -1) {
            non_index = onelen - 1;
        }
        for (int i = 0; i < onelen; i++) {
            if (i != non_index) {
                output += input[i];
            }
        }
    cout<<output<<endl;
}

int main()
{
   ll t=1;
   cin>>t;
   while(t--){
    solve();
   }
    
}


