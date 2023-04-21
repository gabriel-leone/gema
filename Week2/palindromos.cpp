#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string str;
  cin >> str;
  int count = 0;
  for (int i = 0, j = n - 1; j > i; i++, j--)
  {
    if (str[i] != str[j])
    {
      count++;
    }
  }
  cout << count;
}