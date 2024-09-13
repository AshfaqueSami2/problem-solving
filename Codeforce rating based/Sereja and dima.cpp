#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    vector<int> v(t); 
    for (int i = 0; i < t; i++)
    {
        cin>>v[i];
    }
    int sereja = 0, dima = 0, turn = 1; 
    while(!v.empty()) 
    {
        if(turn == 1)
        {
            if(v[0]>v.back())
            {
                sereja+=v[0];
                v.erase(v.begin());
            }
            else
            {
                sereja+=v.back();
                v.pop_back();
            }
            turn = 2;
        }
        else
        {
            if(v[0]>v.back())
            {
                dima+=v[0];
                v.erase(v.begin());
            }
            else
            {
              dima+=v.back();
              v.pop_back();  
            }
            turn =1;
        }
    }
    cout<<sereja<<" "<<dima;
}