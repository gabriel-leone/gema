#include <iostream>
using namespace std;

int n, x;
int v[20], mark[20];
int ans = 0;

void solve(int i)
{
  if (i == n)
  {
    int sum = 0;
    for (int j = 0; j < n; j++)
    {
      if (mark[j])
      {
        sum += v[j];
      }
    }
    if (sum == x)
      ans += 1;
    return;
  }

  mark[i] = true;
  solve(i + 1);

  mark[i] = false;
  solve(i + 1);
}

int main()
{
  cin >> n >> x;

  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  solve(0);
  cout << ans << endl;
}