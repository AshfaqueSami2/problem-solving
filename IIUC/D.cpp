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


int main()
{
    int n,step;
    cin>>n>>step;
    vector<int> arr(n);
    for (int i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int subtract = 0,indx = 0;
    for (int i = 0; i < step; i++)
    {
        while(indx<n && arr[indx] == subtract){indx++;}
        if(indx == n){
            cout<<"0"<<endl;
        }
        else{
            cout<<arr[indx]-subtract<<endl;
            subtract = arr[indx];
        }
    }
     

    

    
    
}
