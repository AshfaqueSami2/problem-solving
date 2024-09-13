#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin >> t;

   while(t--)
   {
        int n;
        cin >> n;
        int digit[n];

        for (int i = 0; i < n; i++) {
            cin >> digit[i];
        }

        int minvalue = digit[0];

        for (int i = 1; i < n; i++) 
        {
            if (digit[i] < minvalue) 
            {
                minvalue = digit[i];
            }
        }
        for (int i = 0; i < n; i++) 
        {
            if (digit[i] == minvalue) 
            {
                digit[i] += 1;
                break;
            }
        }
        int mul = 1;
        for (int i = 0; i < n; i++) {
            mul *= digit[i];
        }
        cout <<mul<< endl;
    }

    return 0;
}
