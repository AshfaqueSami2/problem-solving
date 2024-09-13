#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr[t+10];
    while (t--)
    {
        int cnt = 0;
        for(int i=0;i<4;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<=3;i++)
        {
            if(arr[i]> arr[0])
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}