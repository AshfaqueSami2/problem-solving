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
   int n;
   cin>>n;
   int arr[n+10];
   int total = 0;
   FOR0(i,n){
    cin>>arr[i];
    total+=arr[i];
   }
   int avg = total/n;
   int ex = 0;
   bool f = false;
   FOR0(i,n){
    if(arr[i]>avg){
        ex += (arr[i] -avg);
        }
    if(arr[i]<avg){
        ex -= (avg - arr[i]);
    }
    if(ex<0){
        f = true;
        break;
    }
}
  
//    FOR0(i,n){
//     if(ex<0){
//         
//         break;
//     }
//    }
   if(f){
    NO;
   }
   else YES;
    }

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    
}


        