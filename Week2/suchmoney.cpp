#include <iostream>
using namespace std;

int main()
{
  int n, x;
  cin >> n;
  int v[n];
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  int menor = v[0], maior = v[0];
  for (int i = 1; i < n; i++)
  {
    if (v[i] < menor)
    {
      menor = v[i];
    }
    else if (v[i] > maior)
    {
      maior = v[i];
    }
  }
  x = maior - menor;
  cout << x;
  return 0;
}
