#include <iostream>
using namespace std;
int main() 
{
    string input;
    cin >> input;
    int h = 0,e = 0,l = 0,o = 0;
    int length = input.length();
    for (int i = 0; i < length; i++) 
    {
        if (input[i] == 'h') 
        {
            h = 1;
        } 
        else if (input[i] == 'e' && h == 1) 
        {
            e = 1;
        } 
        else if (input[i] == 'l' && e == 1 && l < 2) 
        {
            l++;
        } 
        else if (input[i] == 'o' && l == 2) 
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}