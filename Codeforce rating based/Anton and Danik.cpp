#include<iostream>
using namespace std;
int main()
{
    int t,count1=0,count2=0;
    cin>>t;
    char x;
    while(t--)
    {
        cin>>x;
        if(x=='D')
        {
            count1++;
        }
        else if(x =='A')
        {
            count2++;
        }
    }
    if(count1>count2)
    {
        cout<<"Danik"<<endl;
    }
    else if(count1<count2)
    {
        cout<<"Anton"<<endl;
    }
    else if(count1 == count2)
    {
        cout<<"Friendship"<<endl;
    }
}