#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+10][n+10];
    int primal = 0;
    int second = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (i == j) {
                primal += arr[i][j];
            }
            if (i == n - j - 1) {
                second += arr[i][j];
            }
        }
        
    }
    cout<<abs(primal-second)<<endl;
    
    
}