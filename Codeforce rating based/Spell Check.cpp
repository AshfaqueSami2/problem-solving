#include<iostream>
using namespace std;
int main()
{
    int t,j,n,z;
    char a[1000];
    cin >> t;
    while(t--)
    {
        cin >> z;
        int f=0,T=0,i=0,m=0,u=0,r=0;
        for(j = 0;j < z;j++)
        {
            cin >> a[j];
        }
        for(j = 0;j < z;j++)
        {
            if(a[j]=='T')
            {
                T++;
            }
            else if(a[j]=='i')
            {
                i++;
            }
            else if(a[j]=='m')
            {
                m++;
            }
            else if(a[j]=='u')
            {
                u++;
            }
            else if(a[j]=='r')
            {
                r++;
            }
            else
            {
                f++;
                break;
            }
        }
        if(f==0 && T==1 && i==1 && m==1 && u==1 && r==1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
 
    }
}