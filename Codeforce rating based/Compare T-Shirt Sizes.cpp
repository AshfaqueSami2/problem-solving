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

void solve()
{
  string s1, s2;
  cin >> s1 >> s2;
  if (s1 == s2)
    cout << '=' << endl;
  else
  {
    if (s1[s1.size() - 1] == 'S' && s2[s2.size() - 1] != 'S')
      cout << '<' << endl;
    else if (s1[s1.size() - 1] == 'L' && s2[s2.size() - 1] != 'L')
      cout << '>' << endl;
    else if (s2[s2.size() - 1] == 'S' && s1[s1.size() - 1] != 'S')
      cout << '>' << endl;
    else if (s2[s2.size() - 1] == 'L' && s1[s1.size() - 1] != 'L')
      cout << '<' << endl;
    else if (s1[s1.size() - 1] == 'M' && s2[s2.size() - 1] == 'S')
      cout << '>' << endl;
    else if (s1[s1.size() - 1] == 'M' && s2[s2.size() - 1] == 'L')
      cout << '<' << endl;
    else if (s1[s1.size() - 1] == 'S' && s2[s2.size() - 1] == 'M')
      cout << '<' << endl;
    else if (s1[s1.size() - 1] == 'L' && s2[s2.size() - 1] == 'M')
      cout << '>' << endl;
    else if (s1[s1.size() - 1] == 'S' && s2[s2.size() - 1] == 'S' && s1.size() > s2.size())
      cout << '<' << endl;
    else if (s1[s1.size() - 1] == 'S' && s2[s2.size() - 1] == 'S' && s1.size() < s2.size())
      cout << '>' << endl;
    else if (s1[s1.size() - 1] == 'L' && s2[s2.size() - 1] == 'L' && s1.size() > s2.size())
      cout << '>' << endl;
    else if (s1[s1.size() - 1] == 'L' && s2[s2.size() - 1] == 'L' && s1.size() < s2.size())
      cout << '<' << endl;
  }
}
int main()
{
  ll t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }
  // solve();
}
