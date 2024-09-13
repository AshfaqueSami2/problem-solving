#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[101];
    cin>>s;
    int up=0,low=0,d=0;
    int length =strlen(s);
    for(int i = 0;i < length;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            up = 1;
        }
        if(s[i]>='a' && s[i]<='z')
        {
            low = 1;
        }
        for(int j = i+1; j < length;j++)
        {
            if(s[i]==s[j])
            {
                d = 1;
                break;
            }
        }
    }
    if(up ==1 && low ==1 && d == 0)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
