#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x, y;
    cin >> x >> y;
    long s1 = 0, s2 = 0, s3 = 0;
    if(x > y)
    {
        long long temp = x;
        x = y;
        y = temp;
    }
    for(int i = x; i <= y; i++)
    {
        s1 += i;

        if(i % 2 == 0)
        {
            s2 += i;
        } 
         else
        {
            s3 += i;
        }
        
    }
    cout << s1 << '\n' << s2 << '\n' << s3 << '\n';
}