#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,i;
    long long a,b,c;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        if (a + b <= c || b + c <= a || c + a <= b) 
        {
            cout << "Case " << i << ": Invalid" << endl;
        } else if (a == b && b == c)
        {
            cout << "Case " << i << ": Equilateral" << endl;
        } else if (a == b || b == c || c == a) 
        {
            cout << "Case " << i << ": Isosceles" << endl;
        } else 
            cout << "Case " << i << ": Scalene" << endl;
        
}
}
