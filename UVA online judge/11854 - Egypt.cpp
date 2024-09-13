#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x,y,z;
    while(1)
    {
        cin>>x>>y>>z;


        if(x==0 && y==0 && z==0)
        {
            break;
        }
        else if((x*x+y*y)==(z*z) || (x*x+z*z)==(y*y) || (z*z+y*y)==(x*x))
        {
            cout<<"right"<<endl;
        }
        else
        {
            cout<<"wrong"<<endl;
        }
    }
}
