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
    int a ;
    cin>>a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    int maximum = arr[0];
    int minimum = arr[0];
    for (int i = 0; i < a; i++)
    {
        if(arr[i] > maximum){
            maximum = arr[i];
        }
        if(arr[i] < minimum){
            minimum = arr[i];
        }
    }
    int maxi2 = minimum;
    for (int  i = 0; i <a; i++)
    {
        if(arr[i] != maximum && arr[i]> maxi2){
            maxi2 = arr[i];
        }
    }
    int result;
    int cnt =0;
    for (int i = 0; i < a; i++)
    {
        if(arr[i] == maximum){
            cnt+=1;
        }
    }
    for (int i = 0; i <a; i++)
    {
        if(arr[i]<maximum){
            result = arr[i] - maximum;
            cout<<" "<<result;
        }
        else if(cnt>1){
            if(arr[i]==maximum){
                result = arr[i] - arr[i];
                cout<<" "<<result;
            }
        }
        else{
            result = arr[i] - maxi2;
            cout<<" "<<result;
        }
    }
    
    
    nl;
      
}
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
         solve();
    }
    



}

