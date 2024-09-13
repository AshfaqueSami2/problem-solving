#include<iostream>
using namespace std;
int main()
{
   int numoffrnd,heightoffnch;
   cin>>numoffrnd>>heightoffnch;
    int height[numoffrnd];
    int count = 0;
   for(int i =0;i<numoffrnd;i++)
   {
    cin>>height[i];
    if(height[i] > heightoffnch)
    {
        count+=2;
    }
    else
    {
        count+=1;
    }
   }
   cout<<count<<endl;
}