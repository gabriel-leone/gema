#include <iostream>
using namespace std;
 
int main()
{
  int a, b, c, d = 0;
  cin >> c;
  if (c > 2)
  {
    a = (c + 1) / 2;
    b = (c - 1) / 2;
    d++;
    cout << d << "\n"
         << a << " " << b << "\n";
  }
  else
  {
    printf("0\n");
  }
}