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
    cin >> n;
    int arr1[n][n];
   for(int i = 0 ; i < n ; i++)
   for(int j = 0 ; j < n ; j++)
   {
        char c; 
        cin >> c;
        if(c == '1') arr1[i][j] = 1;
        else arr1[i][j] = 0;
   }

   bool tri = false , sqr = false;
   for(int  i = 0 ; i < n ; i++)
   {
        for(int j = 1 ; j < n -1 ; j++)
        {
            if(arr1[i][j] == 1)
            {
                if(arr1[i][j-1] == 0 && arr1[i][j+1] == 0)
                {
                    tri = true;
                    break;
                }
            }
        }
   }
   if(tri) cout << "TRIANGLE" << endl;
   else cout << "SQUARE" << endl;
    
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    
}


        