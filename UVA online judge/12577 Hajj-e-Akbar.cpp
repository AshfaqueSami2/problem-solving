#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string input;
    int cnt = 1;
    
    while (getline(cin,input)) 
    {
        if (input == "*") 
        {
            break;
        }
        if (input == "Hajj") 
        {
            cout << "Case " << cnt << ": Hajj-e-Akbar" << endl;
        }
        else if (input == "Umrah") 
         {
            cout << "Case " << cnt << ": Hajj-e-Asghar" << endl;
        }
        
        cnt++;
    }

}
