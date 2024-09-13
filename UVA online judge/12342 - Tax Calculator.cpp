#include<bits/stdc++.h>
//wrong
using namespace std;
int main()
{
    int income,tax;
    int n;
    cin>>n;
    while(n--)
    {
    while(cin>>income)
    {
        tax = 0;
     if(income<180000 && income > 0)
    {
        tax = 0;
    }
     else if (income <= 480000) 
    {
        tax = (income - 180000) * 0.10;
    }
    else if (income <= 880000) 
    {
        tax = 300000 * 0.10 + (income - 480000) * 0.15;
    } 
    else if (income <= 1180000) 
    {
        tax = 300000 * 0.10 + 400000 * 0.15 + (income - 880000) * 0.20;
    } 
    else 
    {
        tax = 300000 * 0.10 + 400000 * 0.15 + 300000 * 0.20 + (income - 1180000) * 0.25;
    }

    if(tax<2000 && tax>0)
    {
        tax = 2000;
    }
    
    tax = ceil(tax);

    cout<<tax<<endl;
    }
    } 

}