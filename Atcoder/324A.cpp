#include <iostream>
using namespace std;
int main() 
{
    int x;
    cin >> x;
    int n[1000];
    for (int i = 0; i < x; i++) 
    {
        cin >> n[i];
    }

    int same = 1;  
    for (int i = 1; i < x; i++) 
    {
        if (n[i] != n[0]) 
        {
            same = 0;  
            break;
        }
    }

    if (same == 1) 
    {
        cout << "Yes" << endl;
    }
    else 
    {
        cout << "No" << endl;
    }
}
