#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int a[x];
    int hard = 0;
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<x;i++)
    {
        if(a[i] == 1)
        {
            hard = 1;
            break;
        }
    }
    if(hard == 1)
    {
        cout<<"HARD"<<endl;
    }
    else
    cout<<"EASY"<<endl;
}
