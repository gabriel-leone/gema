#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  int valor[n], subs[m];

  for (int i = 0; i < n; i++)
  {
    cin >> valor[i];
  }

  for (int i = 0; i < m; i++)
  {
    cin >> subs[i];
  }

  int menorValor = 0, maiorValor = n, i = 0;

  while (menorValor <= maiorValor)
  {
    int mid = (menorValor + maiorValor) / 2;

    if (subs[i] - valor[mid] < 0)
    {
      maiorValor = mid - 1;
      cout << "DEBUG1 " << valor[mid];
    }
    else if (subs[i] - valor[mid] > 0)
    {
      menorValor = mid + 1;
      cout << "DEBUG2 " << valor[mid];
    }
    else
    {
      cout << valor[mid];
      i++;
    }
  }
}