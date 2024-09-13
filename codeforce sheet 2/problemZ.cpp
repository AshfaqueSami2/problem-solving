#include <iostream>
using namespace std;
int main() 
{
    int k,s;
    cin>>k>>s;
    int cnt =0;
    for (int X = 0; X <= k; X++) {
        for (int Y = 0; Y <= k; Y++) {
            int Z = s - X - Y;
            if (Z >= 0 && Z <= k) {
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
