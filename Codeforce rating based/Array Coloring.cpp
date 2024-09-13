#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,i,flag = 0;
        cin>>x;
        int arr[x];
        int sum=0;
        for(i = 0;i<x;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum % 2 == 0)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
}