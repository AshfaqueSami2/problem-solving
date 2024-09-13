#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int flag = 1;

    while(n != 1)
    {
        if(n % 2 != 0)
        {
            flag = 0;
            break;
        }
        n /= 2;
    }
    if(flag == 1)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
    
}