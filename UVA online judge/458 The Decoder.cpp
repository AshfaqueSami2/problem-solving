#include <iostream>
using namespace std;
int main() 
{
    string line;

    while (getline(cin, line)) 
    {
        int len = line.length();
        char code[len];
        for(int i = 0;i<len;i++)
        {
        code[i]=line[i]-7;
        }
        for(int i=0;i<len;i++)
        {
        cout<<code[i];
        }
        cout<<endl;
        
}
}