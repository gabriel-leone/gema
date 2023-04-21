#include <iostream>
using namespace std;

int main()
{
  int linhas, colunas;
  cin >> linhas >> colunas;
  int matriz[linhas][colunas];
  int linhaFinal, colunaFinal;

  for (int i = 0; i < linhas; i++)
  {
    for (int j = 0; j < colunas; j++)
    {
      cin >> matriz[i][j];
      if (matriz[i][j] == 0)
      {
        linhaFinal = i;
        colunaFinal = j;
      }
    }
  }
  cout << linhaFinal << " " << colunaFinal;
}