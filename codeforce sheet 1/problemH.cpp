#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    double res1,res2,res3;
    res1 = (double)x/y;
    res1 = floor(res1);
    res2 = (double)x/y;
    res2 = ceil(res2);
    res3 = (double)x/y;
    res3= round(res3);
cout<<"floor "<<x<<" / "<<y<<" = "<<res1<<endl;
cout<<"ceil "<<x<<" / "<<y<<" = "<<res2<<endl;
cout<<"round "<<x<<" / "<<y<<" = "<<res3<<endl;
}
