#include <bits/stdc++.h>
using namespace std;

char v[1000];

int main()
{
  string s;
  getline(cin, s);
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] >= 'a' && s[i] <= 'z')
    {
      v[i] = s[i];
      for (int j = 1; j < 1000; j++)
      {
        if (v[j] == s[i])
        {
          v[i] = 0;
          break;
        }
      }
    }
  }

  int count = 0;
  for (int i = 0; i < 1000; i++)
  {
    if (v[i] != 0)
    {
      count++;
    }
  }
  cout << count;
}