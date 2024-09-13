#include<iostream>
using namespace std;
int main()
{
    int i,a,b,sum=0,n;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(1)
    {
      cin>>n;
      
        if(n==0)
        {
            break;
        }
        else
        {
            sum=0;
            for(i=1; i<n; i++)
            {
                if(n%i==0)
                    sum+=i;
            }
            if(sum==n)
            cout<<n<<"  PERFECT"<<endl;
            else if(sum>n)
               cout<<n<<"  ABUNDANT"<<endl;
            else
            cout<<n<<"  DEFICIENT"<<endl;
        }
    }
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}