#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n=5;
    long long arr[n+10];
    for (long long i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long min = 0,max =0;
    for (long long i = 0; i < 4; i++)
    {
        min+=arr[i];
    }
    for (long long i = 1; i < 5; i++)
    {
        max+=arr[i];
    }
    cout<<min<<" "<<max;
    
    
    
    
}