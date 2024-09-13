#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    for(int i =1;;i++)
    {
        int x;
        cin>>x;
        if(x == 0)
        {
            break;
        }
        double u,v,a,t,s;
        if(x == 1)
        {
             cin >> u >> v >> t;
            a = (v - u) / t;
            s = u * t + 0.5 * a * t * t;
            cout <<"Case "<< fixed << setprecision(3) << i << ": " << s << " " << a << endl;
        }
         else if (x == 2) 
         {
            cin >> u >> v >> a;
            t = (v - u) / a;
            s = u * t + 0.5 * a * t * t;
            cout <<"Case "<< fixed << setprecision(3) << i << ": " << s << " " << t << endl;
        } 
        else if ( x == 3) 
        { 
            cin >> u >> a >> s;
            v = sqrt(u * u + 2 * a * s);
            t = (v - u) / a;
            cout <<"Case "<< fixed << setprecision(3) << i << ": " << v << " " << t << endl;
        }
         else if (x == 4) 
         { 
            cin >> v >> a >> s;
            u = sqrt(v * v - 2 * a * s);
            t = (v - u) / a;
            cout <<"Case "<< fixed << setprecision(3) <<i<< ": " << u << " " << t << endl;
        }
        
    }
}