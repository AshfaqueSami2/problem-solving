#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int t;
    cin>>t;
    double x,y;
    for(int i =1;i<=t;i++)
    {
        cin>>x>>y;
    double inctemp = (5.0/9.0)*y;
    double newtemp = inctemp + x;
    cout << "Case " << i << ": " << fixed << setprecision(2) << newtemp << endl;
    }
}
