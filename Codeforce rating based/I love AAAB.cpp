#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
    int n;
    string s;
    cin >> s;
    n = s.length();
    int ans = 1, cnt = 0, cnt1 = 0;
    if (s[0] == 'B') 
    {
        ans = 0;
    }
    if(s.back() == 'A')
    {
        ans = 0;
    }
    else 
    {
        cnt1++;
    }
    for (int i = 1; i < n; i++) 
    {
        if (s[i] == 'B') 
        {
            cnt++;
            if (cnt > cnt1) 
            {
                ans = 0;
            }
        } 
        else 
        {
            cnt1++;
        }
    }
    if (cnt > cnt1) 
    {
        ans = 0;
    }

    if (ans == 1) 
    {
        cout << "YES\n";
    } 
    else 
    {
        cout << "NO\n";
    }
    }
}
