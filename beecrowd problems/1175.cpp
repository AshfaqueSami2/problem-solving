#include <iostream>
using namespace std;
int main()
{
    int arr[20], i;   
    for (i = 19; i >= 0; i--)
    {
        cin >> arr[i];
    }
    for (i = 0; i < 20; i++)
    {
        cout << "N[" << i << "] = " << arr[i] << endl;
    }
}
