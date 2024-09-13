#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+10];
    int p =0, m =0, z = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i]>0)p++;
        else if(arr[i]<0)m++;
        else if(arr[i]==0)z++;
    }
    cout<<fixed<<setprecision(6);
    cout<<((double)p/n)<<endl;
    cout<<((double)m/n)<<endl;
    cout<<((double)z/n)<<endl;

    
    
    
}