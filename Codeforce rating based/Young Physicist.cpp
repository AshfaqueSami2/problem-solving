#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int cnt1=0,cnt2=0,cnt3=0;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        cnt1+=a;
        cnt2+=b;
        cnt3+=c;
    }
    if(cnt1 == 0 && cnt2 ==0 && cnt3 ==0)
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
}

