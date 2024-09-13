#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int steps = 0;
    while (x > 0)
    {
        steps += x / 5;
        x = x % 5; 
        if (x > 0)
        {
            steps++; 
            x = 0;
        }
    }

    cout << steps << endl;
    return 0;
}
