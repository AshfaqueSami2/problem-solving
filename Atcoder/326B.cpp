#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for(int i = n; i <= 919; i++)
    {
        int hundred = i / 100;
        int ten = (i / 10) % 10;
        int one = i % 10;

        if((hundred * ten) == one)
        {
            cout << i << '\n';
            break;
        }

    }

}