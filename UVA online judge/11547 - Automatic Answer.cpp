#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x;
    while(t--)
    {
        cin>>x;
        int result = ((x * 567) / 9 + 7492) * 235 / 47 - 498;
        int tens = (result / 10) % 10;
        cout<<abs(tens)<<endl;
    }
}