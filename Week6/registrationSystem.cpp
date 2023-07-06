#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  unordered_set<string> s;
  string name[n];
  for (int i = 0; i < n; i++)
  {
    cin >> name[i];
  }

  for (int i = 0; i < n; i++)
  {
    int size = s.size();
    s.insert(name[i]);

    if (size + 1 == s.size())
    {
      cout << "OK" << endl;
      continue;
    }

    int var = 1;
    name[1] += "1";
    s.insert(name[i]);
    if (size + 1 == s.size())
    {
      cout << name[i] << endl;
      continue;
    }
    while (size == s.size())
    {
      char last = name[i].back();
      name[i].pop_back();
      if (var == 1)
      {
        name[i] += last;
      }
      name[i] = name[i] + to_string(var);
      s.insert(name[i]);
      var++;
    }
    cout << name[i] << endl;
  }
}