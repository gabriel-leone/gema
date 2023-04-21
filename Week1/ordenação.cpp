#include <iostream>
using namespace std;

int main()
{
  int num1, num2, num3;

  cin >> num1;
  cin >> num2;
  cin >> num3;

  if (num1 >= num2 && num1 >= num3)
  {
    if (num2 >= num3)
    {
      cout << num1 << "\n"
           << num2 << "\n"
           << num3;
    }
    else
    {
      cout << num1 << "\n"
           << num3 << "\n"
           << num2;
    }
  }
  else if (num2 >= num1 && num2 >= num3)
  {
    if (num1 >= num3)
    {
      cout << num2 << "\n"
           << num1 << "\n"
           << num3;
    }
    else
    {
      cout << num2 << "\n"
           << num3 << "\n"
           << num1;
    }
  }
  else
  {
    if (num2 >= num1)
    {
      cout << num3 << "\n"
           << num2 << "\n"
           << num1;
    }
    else
    {
      cout << num3 << "\n"
           << num1 << "\n"
           << num2;
    }
  }
  return 0;
}