#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int cnt1=0,cnt2=0;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        
        if(a>b)
        {
            cnt1++;
        }
        else if(b>a)
        cnt2++;
        
    }
    if(cnt1>cnt2)
    {
        cout<<"Mishka"<<endl;
    }
    else if(cnt1<cnt2)
    {
        cout<<"Chris"<<endl;
    }
    else
    cout<<"Friendship is magic!^^"<<endl;
}