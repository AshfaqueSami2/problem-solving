//incomplete
#include<iostream>
using namespace std;
int main()
{
    
    int t;
    cin>>t;//1
    while(t--) 
    {
        int n,p;
        int lostday = 0;
        cin>>n>>p; //14 3
        int parameter[100];
        for(int i=0;i<p;i++) // 3
        {
            cin>>parameter[i]; //3 4 8
        }
        
        for( int j = 1;j<=n;j++) //14
        {
            if(j % 7 ==0 || (j+1) % 7 == 0) //fri sat cross  
            {
                continue;
            }
            int hartal =0; 
            //loop
            {
                //condition
                {
                    hartal = 1;
                }
            }
            lostday+=hartal;

        }
        cout<<lostday<<endl;
    }
    
}