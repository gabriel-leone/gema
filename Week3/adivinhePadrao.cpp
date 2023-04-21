#include <iostream>
using namespace std;

const int limite = 100;

long long matriz[limite][limite];

int main()
{
  int linhas, colunas;
  cin >> linhas >> colunas;

  for (int i = 0; i < linhas; i++)
  {
    for (int j = 0; j < colunas; j++)
    {
      cin >> matriz[i][j];
    }
  }

  for (int j = 0; j < colunas; j++)
  {
    bool caso1, caso2, caso3;
    caso1 = caso2 = caso3 = true;

    for (int i = 1; i < linhas; i++)
    {
      caso1 = caso1 && (matriz[i][j] > matriz[i - 1][j]);
      caso2 = caso2 && (matriz[i][j] < matriz[i - 1][j]);
      caso3 = caso3 && (matriz[i][j] == matriz[i - 1][j]);
    }

    if (caso1 || caso2 || caso3)
    {
      cout << 'S' << endl;
    }
    else
    {
      cout << 'N' << endl;
    }
  }
}