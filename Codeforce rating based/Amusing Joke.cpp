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
    string s1, s2, s3, main;
    cin >> s1 >> s2 >> s3;
    main = s1+s2;
    sort(s3.begin(), s3.end());
    sort(main.begin(), main.end());
    if(main == s3){
        YES;
    }
    else{
        NO;
    }
}
