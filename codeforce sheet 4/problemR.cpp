#include <bits/stdc++.h>
using namespace std;

int main()
{
  int size;
  cin >> size;
  string value;
  cin >> value;
  int score = 0;

  for (int i = 0; i < value.size(); i++)
  {
    char c = value[i];

    if (c == 'V')
    {
      score += 5;
    }
    else if (c == 'W')
    {
      score += 2;
    }
    else if (c == 'Z')
    {
      if (i != value.size() - 1)
      {
        if (value[i + 1] == 'W')
        {
          score /= 2;
          value[i + 1] = '0';
        }
        else if (value[i + 1] == 'V')
        {
          score /= 5;
          value[i + 1] = '0';
        }
      }
    }
    else if (c == 'Y')
    {
      if (i != value.size() - 1)
      {
        value.push_back(value[i + 1]);
        value[i + 1] = '0';
      }
    }
    else if (c == 'X')
    {
      if (i != value.size() - 1)
      {
        value[i + 1] = '0';
      }
    }
  }

  cout << score;
}
