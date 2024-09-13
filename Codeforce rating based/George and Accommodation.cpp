#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int count = 0,c = 0;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
       if (y - x >= 2 || x-y>=2) 
        {
            count++;
        }
    }
    cout<<count;
}