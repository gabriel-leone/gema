#include <bits/stdc++.h>
using namespace std;

int main()
{
  stack<char> v;

  string s;
  cin >> s;

  for (int i = 0; i < s.size(); i++)
  {
    v.push(s[i]);
  }

  int count = 0;
  while (!v.empty())
  {
    if (v.top() == ')')
    {
      count++;
    }
    else if (v.top() == '(' && count > 0)
    {
      count--;
    }
    else if (v.top() == '(' && count == 0)
    {
      count = -1;
      break;
    }
    v.pop();
  }

  if (count == 0)
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }
}
