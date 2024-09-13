#include<iostream>
#include<math.h>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    double a = (x2 - x1);
    double b = (y2 - y1);
    double result = sqrt((a*a)+(b*b)) ;
    cout<<fixed<<setprecision(9)<<result<<endl;
}