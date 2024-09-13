#include<iostream>
#include<iomanip>
using namespace std;
#define pi 3.141592653
int main ()
{
    double R,x;
    cin>>R;
    x = pi*R*R;
    cout<<setprecision(9)<<fixed;
    cout<<x;
}

