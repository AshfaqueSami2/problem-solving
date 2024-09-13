#include<iostream>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    for(int i = 1; i<=t;i++)
    {
        int n;
        cin>>n;
        int f=0;
        int real_n = n;
         while (n != 1 && n != 4) {
            int sum = 0;
            while (n > 0) {
                int digit = n % 10;
                sum += digit * digit;
                n /= 10;
            }
            n = sum;
    }
    if(n==1)
    {
        f = 1;
    }
    if(f==1)
    {
        cout<<"Case #"<<i<<": "<<real_n<<" is a Happy number."<<endl;
    }
    else
    {
        cout<<"Case #"<<i<<": "<<real_n<<" is an Unhappy number."<<endl;
    }
    }
}
