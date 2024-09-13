#include<iostream>
#include <string.h>
using namespace std;
int main()
{
     int t;
    cin>>t;
    while (t--) 
    {
        char x[7];
        for (int i = 0; i < 6; i++) 
        {
            cin>>x[i];
        }
        int sum1 = 0,sum2 = 0;
        for (int i = 0; i < 3; i++) { 
            sum1 += x[i] - '0';
        }
        for (int i = 3; i < 6; i++) {
            sum2 += x[i] - '0'; 
        }
        if (sum1 == sum2) 
        { 
           cout<<"YES"<<endl;
        } else 
        {
            cout<<"NO"<<endl;
        }
    }
}