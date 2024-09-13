#include<iostream>
using namespace std;
int main()
{
    int x,y,t;
    while(cin>>x>>y)
    {
        int max_cycle = 0;
        if(x<y)
        {
        for(int i =x;i<=y;i++)
        {
            int num = i;
            int length = 1;
             while (num != 1) 
             {
                if (num % 2 == 0)
                {
                    num /= 2;
                }
                else
                {
                    num = 3 * num + 1;
                }
                length++;
            }
            if(length>max_cycle)
            {
                max_cycle = length;
            }
        }
    cout<<x<<" "<<y<<" "<<max_cycle<<endl;
    }
    else
    {
         for(int i =y;i<=x;i++)
        {
            int num = i;
            int length = 1;
             while (num != 1) 
             {
                if (num % 2 == 0)
                {
                    num /= 2;
                }
                else
                {
                    num = 3 * num + 1;
                }
                length++;
            }
            if(length>max_cycle)
            {
                max_cycle = length;
            }
        }
    cout<<x<<" "<<y<<" "<<max_cycle<<endl;
    }
    }
}
