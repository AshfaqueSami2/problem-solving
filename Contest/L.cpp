#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while (t--) 
    {
        int n;
        cin>>n;
        long long totalcandy = 0;
        for (int i = 0;i<n;i++) 
        {
            
            long long candy;
            getchar();
            cin >> candy;
            
            totalcandy+=candy;
        }
        if(totalcandy%n==0) 
        {
            
            cout<<"YES"<<endl;
        }
        else
        {
            
            cout<<"NO"<<endl;
        }
    }

}
