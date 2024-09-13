#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char c[10000];
        cin>>c;
        int count=0;
        if(c[0]=='Y' || c[0]=='y')
        {
            count+=1;
        }
        if(c[1]=='E' || c[1]=='e')
        {
            count+=1;
        }   
        if(c[2]=='S' || c[2]=='s')
        {
            count+=1;
        }
        if(count==3)
            cout<<"YES"<<endl;
        else
           cout<<"NO"<<endl;
    }
}

