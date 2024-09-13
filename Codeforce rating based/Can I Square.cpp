#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x;
        cin>>x;
        long long sum=0;
        for (long long i = 0; i < x; i++)
        {
            long long ai;
            cin>>ai;
            sum+=ai;
        }
        double squareroot = sqrt(sum);
        int floornum = int (squareroot);
        if(squareroot == floornum)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
        
    }
}