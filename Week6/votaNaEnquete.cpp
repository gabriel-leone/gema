#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  map<string, int> v;
  set<string> nomes;

  for (int i = 0; i < n; i++)
  {
    string nomesInput, dias;
    cin >> nomesInput >> dias;
    int temp = nomes.size();
    nomes.insert(nomesInput);
    if (temp != nomes.size())
    {
      if (v.count(dias) == 0)
        v[dias] = 1;
      else
        v[dias]++;
    }
  }

  if (v["quarta"] > v["sexta"])
  {
    cout << "quarta" << endl;
  }
  else if (v["quarta"] < v["sexta"])
  {
    cout << "sexta" << endl;
  }
  else
  {
    cout << "empate" << endl;
  }
}
