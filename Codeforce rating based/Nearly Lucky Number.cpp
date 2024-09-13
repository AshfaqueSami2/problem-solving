#include<iostream>
using namespace std;
int main() 
{
    long long n;
    cin>>n;
    int luckyCount = 0,digit;
    while (n > 0) 
    {
        digit = n % 10;
        if (digit == 4 || digit == 7) {
            luckyCount++;
        }
        n /= 10;
    }

    if (luckyCount == 4 || luckyCount == 7) 
    {
        cout<<"YES"<<endl;
    } 
    else 
    {
        cout<<"NO"<<endl;
    }

    return 0;
}