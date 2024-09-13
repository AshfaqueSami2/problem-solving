#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    auto maxi = max_element(arr.begin(), arr.end());
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (*maxi == arr[i]) cnt++;
    }
    cout << cnt << endl;
    
    
    
    
    
}