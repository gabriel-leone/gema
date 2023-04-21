#include <iostream>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;

  int ciclos = (n - 1) / 4;
  int ultimo = (n - 1) % 4;

  int ans = 0;
  if (k == 1)
  {
    ans = 1;
  }
  else if (k == 2)
  {
    ans = ciclos;
    if (ultimo >= 1)
      ans++;
  }
  else if (k == 4)
  {
    ans = ciclos;
    if (ultimo >= 2)
      ans++;
  }
  else if (k == 6)
  {
    ans = ciclos;
  }
  else if (k == 8)
  {
    ans = ciclos;
    if (ultimo >= 3)
      ans++;
  }
  else
  {
    ans = 0;
  }

  cout << ans << endl;
}