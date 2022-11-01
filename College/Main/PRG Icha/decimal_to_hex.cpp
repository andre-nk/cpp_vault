#include <iostream>
using namespace std;

string decimal_to_hex(int n)
{
  if (n == 0)
  {
    return "";
  }
  else
  {
    int rem = n % 16;
    if (rem < 10)
    {
      return decimal_to_hex(n / 16) + to_string(rem);
    }
    else
    {
      return decimal_to_hex(n / 16) + char(rem + 55);
    }
  }
}

int main()
{
  int n;
  cin >> n;
  cout << decimal_to_hex(n) << endl;
  return 0;
}
