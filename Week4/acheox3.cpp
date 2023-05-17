#include <iostream>
#include <cmath>
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
  int diff;

  for (int i = 0; i < m; i++)
  {
    int left = 0, right = n - 1, mid;
    while (left <= right)
    {
      mid = (left + right) / 2;
      diff = 1000000000;
      int temp = abs(nums[i] - valores[mid]);

      if (temp < diff)
      {
        diff = temp;
        menorValor = valores[mid];
      }

      if (nums[i] > valores[mid])
      {
        left = mid + 1;
      }
      else if (nums[i] < valores[mid])
      {
        right = mid - 1;
      }
      else
      {
        break;
      }
    }
    cout << menorValor << endl;
    diff = 1000000000;
  }
  return 0;
}
