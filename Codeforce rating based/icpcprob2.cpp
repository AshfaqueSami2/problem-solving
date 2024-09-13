#include <iostream>
using namespace std;

int main() 
{
  int t;
  cin >> t;

  for(int b=1;b<=t;b++)
  {
    int x;
    cin >> x;

    int arr[x];
    for (int i = 0; i < x; i++) 
    {
      cin >> arr[i];
    }

    int count = 0;
    for (int i = 0; i < x; i++) 
    {
      for (int j = i; j < x; j++) 
      {
        int beauty = 1;
        for (int k = i; k <= j; k++) 
        {
          if (arr[k] != arr[i]) 
          {
            beauty = 0;
            break;
          }
        }

        if (beauty == 0) 
        {
          count++;
        }
      }
    }

    cout <<"Case "<<b<<": "<< count << endl;
  }

  return 0;
}