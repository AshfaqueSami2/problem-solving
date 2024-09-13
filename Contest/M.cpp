#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string input;
    cin >> input;
    char currenchar = input[0];
    cout << currenchar;
    for (int i = 1; i<input.length();i++) 
    {
        char currenchar = input[i];
        
        if (currenchar == input[i-1])
        {
            continue;
        }
        else 
        {
            cout << currenchar;
        }
    }

}
