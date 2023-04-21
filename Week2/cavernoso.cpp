#include <iostream>
using namespace std;

int main()
{
  int dias;
  cin >> dias;
  int freq[1001] = {0};

  for (int i = 0; i < dias; i++)
  {
    string str;
    cin >> str;
    freq[str.size()]++;
  }

  int ans = 0;
  for (int i = 0; i < 1001; i++)
  {
    if (freq[i] > freq[ans])
    {
      ans = i;
    }
  }

  cout << ans;
}