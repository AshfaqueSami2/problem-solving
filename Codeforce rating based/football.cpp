#include <iostream>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    int cnt1 = 0, cnt2 = 0, f = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            cnt1++;
            cnt2 = 0;
        }
        else
        {
            cnt1 = 0;
            cnt2++;
        }
        if (cnt1 >= 7 || cnt2 >= 7)
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
        cout << "YES\n";
    else
        cout << "NO\n";
}