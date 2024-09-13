//Wrong ans
#include<iostream> 
using namespace std; 
int main() 
{ 
    int n; 
    while(cin>>n) 
    { 
        if(n%4==0 && n%100!=100 || n%400==0) 
        { 
            if(n%15==0) 
            { 
                cout<<"This is leap year."<<endl; 
                cout<<"This is huluculu festival year."<<endl; 
                cout<<endl; 
            } 
            else 
            { 
                cout<<"This is leap year."<<endl; 
                cout<<endl; 
            } 
        } 
        else if(n%15==0) 
        { 
            cout<<"This is huluculu festival year."<<endl; 
            cout<<endl; 
        } 
        else if(n%55==0 && (n%4==0 && n%100!=0 || n%400==0) ) 
        { 
            cout<<"This is Bulukulu festival year."<<endl; 
            cout<<endl; 
        } 
        else 
        { 
            cout<<"This is an ordinary year."<<endl; 
        } 
    } 
}