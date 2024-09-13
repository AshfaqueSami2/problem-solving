#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long mul = 1;
        for (int i = 0; i < n; i++)
        {
            mul *= arr[i];
        }
        if ((2023 % mul) == 0)
        {
            cout << "YES" << endl;
            cout << 2023 / mul << " ";
            for (int i = 1; i < k; i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
