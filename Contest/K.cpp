#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int total_mark = 0;
        for(int i=0; i<n;i++)
        {
            cin>>a[i];
            total_mark+=a[i];
        }
        double avarage = (double)total_mark/n;
        int cnt =0;
        for(int i=0; i<n;i++)
        {
           if(avarage<a[i])
           {
            cnt++;
           }
        }
        double result = (double)(cnt*100)/n;
        cout << fixed << setprecision(3) << result << "%" << endl;


    }
}