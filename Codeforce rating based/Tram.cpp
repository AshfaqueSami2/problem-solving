#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b;
    int count1=0,count2=0;
    while(t--)
    {
        
        cin>>a>>b;
        count1 = count1 - a +b;
        if(count1>count2)
        {
            count2 = count1;
        }
    }
    cout<<count2<<endl;
    
}