#include <iostream>
using namespace std;

int main()
{
  int left = 0, right = 10;

  while (left <= right)
  {
    int mid = (left + right) / 2;

    cout << mid << endl;

    int novaTentativa;
    cin >> novaTentativa;

    if (novaTentativa == 1)
    {
      left = mid + 1;
    }
    else if (novaTentativa == 0)
    {
      right = mid - 1;
    }
    else
      break;
  }
}