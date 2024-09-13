#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main ()
{
    char c[10];
    int t;
    cin>>t;
    
    while(t--)
    {
        cin>>c;
        int len = strlen(c);
        int cnt_o = 0,cnt_n = 0,cnt_e = 0;
        for(int i=0;i<len;i++)
        {
            if(c[i] == 'o')
            {
                cnt_o++;
            }
            else if(c[i] == 'n')
            {
                cnt_n++;
            }
            else if(c[i] == 'e')
            {
                cnt_e++;
            }
        }
        if(len == 5)
        {
            cout<<"3"<<endl;
        }
        else if((cnt_e >= 1 && cnt_n >= 1) || (cnt_o >= 1 && cnt_n >= 1 ) || (cnt_e >= 1 && cnt_o >= 1) )
        {
            cout<<"1"<<endl;
        }
        else 
        cout<<"2"<<endl;
       
    }
}