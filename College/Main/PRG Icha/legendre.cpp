#include <iostream>
using namespace std;

int legendre(int n, int x)
{
  if (n == 0)
  {
    return 1;
  }
  else if (n == 1)
  {

    return x;
  }
  else
  {
    return ((2 * n - 1) * x * legendre(n - 1, x) - (n - 1) * legendre(n - 2, x)) / n;
  }
}

int main()
{
  int n, x;

  cin >> n;
  cin >> x;

  cout << legendre(n, x) << endl;
  return 0;
}
