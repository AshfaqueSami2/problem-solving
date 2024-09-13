#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long x[n];
        int zero =0,minuscnt = 0;
        for (long long i = 0; i <n; i++)
        {
           cin>>x[i];
           if(x[i] == 0)
        {
            zero++;
        }
        else if( x[i]<0)
        {
            minuscnt++;
        }
        }
        if(zero>0)
        {
        cout<<"0"<<endl; 
        }
        else if(minuscnt%2 == 1)
        {
            cout<<"0"<<endl;
        }
        else
        {
        cout<<"1"<<endl;
        cout << "1 0"<<endl;
        }
        
       
    }
}
//  else if(mul<0)
//         {
//            
//         }
//         else
//         {
//         
//         }