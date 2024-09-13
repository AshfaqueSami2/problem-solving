#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;

    if (c >= 'a' && c <= 'z') 
    {
        char x = c - 32;
        cout << x << endl;
    }
    else if (c >= 'A' && c <= 'Z') 
    {
        char y = c + 32;
        cout << y << endl;
    } 
    return 0;
}
