#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        for(char c = 'a'; c <= 'h';c++) 
        {
            if (c != s[0]) 
            {
                cout << c << (s[1]-'0') <<endl;
            }
        }
        for(int i=1 ;i <= 8;i++)
        {
            if(i != (s[1]-'0'))
            {
                cout << s[0] << i <<endl;
            }
        }

    }
}