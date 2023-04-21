#include <iostream>
using namespace std;

int solve(int i, int k)
{
  if (i == 0)
    return 1;

  int ans = 0;
  for (int j = 1; j <= i; j++)
  {
    if (j % k == 0)
    {
      ans += solve(i - j, j);
    }
  }
  return ans;
}

int main()
{
  int n;
  cin >> n;

  cout << solve(n, 1) << endl;
}