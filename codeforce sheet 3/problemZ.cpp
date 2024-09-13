#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int size,query;
    cin >> size >> query;
    int arr[size];
    for(int i = 0; i < size; i++) 
    {
        cin >> arr[i];
    }
    sort(arr, arr + size);
    while (query--) 
    {
        int x;
        cin >> x;
        int lb = 0, rb = size-1;
        while (lb <= rb) 
        {
            int mid = (lb + rb) / 2;
            if (arr[mid] == x) 
            {
                cout << "found" <<endl;
                break;
            } 
            else if (arr[mid] < x) 
            {
                lb = mid + 1;
            } 
            else 
            {
                rb = mid - 1;
            }
        }
        if (lb > rb) 
        {
            cout << "not found" <<endl;
        }
    }

}