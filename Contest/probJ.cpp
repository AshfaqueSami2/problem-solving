#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int beauty = 1;
        for (int i = 0; i < x; i++)
        {
            int n;
            cin>>n;
            for (int j = 0; i < n; j++)
            {
                if(n == j+1)
                {
                    beauty = 0;
                    break;
                }
            }
            
        }
        if(beauty == 1)
        {
            cout<<"ne krasivo"<<endl;
        }
        else cout<<"prekrasnyy"<<endl;
        
    }
}