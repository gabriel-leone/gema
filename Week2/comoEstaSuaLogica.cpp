#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    int carta;
    cin >> carta;

    if (carta % 2 == 0)
    {
      ans++;
    }
  }

  cout << ans << endl;
}