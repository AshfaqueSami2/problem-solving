#include <iostream>
using namespace std;
int main() 
{
    int a,b;
    cin>>a>>b;
    int per_room = b / a;
    int remain = b % a;
    for(int i = 0;i<a;i++) 
    {
        if(i<remain) 
        {
            for(int j = 0;j< per_room+1;j++) 
            {
                cout<<"*";
            }
        } 
        else 
        {
            for(int j = 0;j<per_room;j++) 
            {
                cout<<"*";
            }
        }
        cout << endl;
    }

}
