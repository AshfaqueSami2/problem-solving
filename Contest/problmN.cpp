#include <iostream>
#include <string.h>
using namespace std;
int main() 
{
    int n, i, length;
    cin >> n;
    char word[110];
    for(i=0;i<n;i++) 
    {
        cin >> word;
        length = strlen(word);
        if (length <= 10) 
        {
            cout << word << endl;
        } 
        else 
        {
            cout << word[0] << (length - 2) << word[length - 1] << endl;
        }
    }
}
