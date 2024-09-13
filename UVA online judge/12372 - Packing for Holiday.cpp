#include<iostream>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
         if (x <= 20 && y <= 20 && z <= 20) 
        {
            cout << "Case " << i << ": good" << endl;
        } 
        else 
        {
            cout << "Case " << i << ": bad" << endl;
        }
    }
}