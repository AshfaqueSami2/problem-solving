#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dbl;

// Loop
#define FOR0(i, n) for (int i = 0; i < n; i++)  // 0 based indexing
#define FOR1(i, n) for (int i = 1; i <= n; i++) // 1 based indexing

void solve()
{
  int n; 
cin>>n; 
string s; 
cin>>s; 
int coins=0; 
int i=0; 
while(i<n) 
{ 
  if(s[i]=='.') 
  { 
    i++; 
  } 
  else if(s[i]=='@') 
  { 
    coins++; 
    i++; 
  } 
  else{ 
    if(s[i+1]=='*') 
    { 
      break; 
    } 
    else{ 
      i++; 
    } 
  } 
} 
cout<<coins<<endl; 
} 

int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
