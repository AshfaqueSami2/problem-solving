#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dbl;

//shortcut
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define yes cout << "yes" << endl
#define no cout << "no" << endl
#define minus_one cout << -1 << endl
#define nl cout<<endl

// Loop 
#define FOR0(i,n) for(int i = 0; i < n; i++) // 0 based indexing
#define FOR1(i,n) for(int i = 1; i <=n; i++) // 1 based indexing


int main()
{
    int n , p , q;
    cin >> n >> p;
    int arr[100000];
    int cnt = 0;
    for(int i =  0 ; i < p ; i++)
    {
        cin >> arr[i];
    }
    cin >> q;
    int add= p+q;
    for(int i = p ; i < add ; i++)
    {
        cin >> arr[i];
    }
 
    sort(arr , arr+(add));
 
    for(int i = 0 ; i < add ; i++)
    {
        if(arr[i] != arr[i+1])
        {
            cnt++;
        }
    }
 
    if(n == cnt){
        cout << "I become the guy." <<endl;
    }
    else{
        cout << "Oh, my keyboard!" << endl;

}
}

