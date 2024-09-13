#include<iostream>
using namespace std;
int main()
{
    double n;
    cin>>n;
    int num = int(n);
    int frac = (n-num)*10;
    if(frac>=0 && frac<=2)
    {
        cout<<num<<"-"<<endl;
    }
    else if(frac>=3 && frac<=6)
    {
        cout<<num<<endl;
    }
    else if(frac>=7 && frac<=9)
    {
        cout<<num<<"+"<<endl;
    }
}
// 15.8 ----->8  ( 15.8 - 15 )=> 0.8 *10 => 8