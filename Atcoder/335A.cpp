#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len = s.length();
    if(s.back() == '3'){
        s[len-1] = '4';
    }
    cout<<s<<endl;
}