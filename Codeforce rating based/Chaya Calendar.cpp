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
  int arr[n];
    int c = 0;
    for (int i = 0; i < n; i++)
    {
      cin>>arr[i];
        int a = arr[i];
        int py = c + 1;
        while (py % a != 0) {
          py++;
        }
        c = py;
    }
    cout << c << endl;
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
