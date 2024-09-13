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
  int n;
  cin>>n;
  string input1,input2;
  int one1 = 0, one2=0;
  cin>>input1>>input2;
  for (int i = 0; i < n; i++)
  {
    if(input1[i] == '1'){
        one1++; //4
    }
  }
  for (int i = 0; i < n; i++)
  {
    if(input2[i] == '1'){
        one2++; //7
    }
  }
  int ans =0;
  ans = abs(one1 - one2); // 3
  int diff = 0;
  for (int i = 0; i < n; i++)
  {
    if(input1[i] != input2[i]){ 
        diff++; // 5
    }
  }
  diff = diff - ans; // 0
  diff/=2;
  ans+=diff;
  cout<<ans<<endl;


  
  
  
}
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
         solve();
    }
   // solve();
}

