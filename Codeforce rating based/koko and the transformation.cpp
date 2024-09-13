#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int length1,length2;
    int num;
    cin>>length1>>length2;
    int sum1=0,sum2=0;
    for (int i = 0; i < length1; i++)
    {
        cin>>num;
        sum1+=num;
    }
    for (int i = 0; i < length2; i++)
    {
        cin>>num;
        sum2+=num;
    }
    if(sum1 == sum2)
    {
        cout<<"Yes"<<endl;
    }
    else
    cout<<"No"<<endl;
    
    
}