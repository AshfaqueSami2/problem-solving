#include<iostream>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    int a,b,c;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        int min = a;
    if (b < min) 
    {
        min = b;
    }
    if (c< min) 
    {
        min = c;
    }
    int max= a;
    if (b> max) 
    {
        max = b;
    }
    if (c > max) 
    {
        max = c;
    }
    int middle = a;
    if ((b > min && b < max) || (b < min && b > max)) 
    {
        middle = b;
    } 
    else if ((c > min  && c < max) || (c < min && c > max)) {
        middle = c;
    }
    cout<<middle<<endl;

    }
}