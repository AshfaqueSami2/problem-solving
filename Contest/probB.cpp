#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if(n >= -(pow(2,31)) && n < pow(2,31)) // 2^31 
    {
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
}
// int => range - / + 2^31 
//double => range 2^108/307
// 