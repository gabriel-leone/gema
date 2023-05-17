#include <bits/stdc++.h>
using namespace std;

int main()
{
  int l = 1, r = 10;

  while (l <= r)
  {
    int m = (l + r) / 2;
    cout << m << "\n";
    fflush(stdout);
    int ans;
    cin >> ans;
    if (ans == 0)
    {
      r = m - 1;
    }
    else if (ans == 1)
    {
      l = m + 1;
    }
    else
    {
      break;
    }
  }
}