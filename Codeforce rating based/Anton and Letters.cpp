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
    string s;
    //cin >> s;
    getline(cin, s);
    int frq[26] = {0};
    FOR0(i,s.length())
    {
        if(s[i] >= 'a' && s[i] <='z'){
            frq[s[i] - 'a']++;
        }
    }
    int cnt = 0;
    FOR0(i,26)
    {
        if(frq[i] > 0)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}
