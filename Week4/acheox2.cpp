#include <iostream>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  int valores[n];

  for (int i = 0; i < n; i++)
  {
    cin >> valores[i];
  }

  int nums[m];
  for (int i = 0; i < m; i++)
  {
    cin >> nums[i];
  }

  int menorValor = 0;
  for (int i = 0; i < m; i++)
  {
    int left = 0, right = m, mid = -1;
    while (left < right)
    {
      mid = (left + right) / 2;
      int temp;
      temp = abs(nums[i] - mid);
      int temp1 = nums[i] - mid;
      int diff = 1000000000;

      if (temp1 > 0)
      {
        right = mid;
      }
      else if (temp1 < 0)
      {
        left = mid;
      }

      if (temp < diff)
      {
        diff = temp;
        menorValor = i;
      }
    }
    cout << menorValor;
  }
}