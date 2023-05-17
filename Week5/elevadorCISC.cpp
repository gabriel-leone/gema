#include <bits/stdc++.h>
using namespace std;

int main()
{
  int quantidadeInputs, numeroDeAndares;
  cin >> quantidadeInputs >> numeroDeAndares;
  int v[quantidadeInputs];
  for (int i = 0; i < quantidadeInputs; i++)
  {
    cin >> v[i];
  }

  int somaDiffAndares = 0;
  for (int i = 0; i < quantidadeInputs - 1; i++)
  {
    somaDiffAndares += abs(v[i] - v[i + 1]);
  }

  cout << somaDiffAndares * 4;
}