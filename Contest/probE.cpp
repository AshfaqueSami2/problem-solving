#include<iostream>
using namespace std;
int main()
{
   int i,n,x,y,z,count=0;
   cin>>n;
   for(i=0;i<n;i++) 
   {
       cin>>x>>y>>z;
     if(x+y+z>=2)
     {
        count++;
     }
   }
   cout<<count<<endl;
}
