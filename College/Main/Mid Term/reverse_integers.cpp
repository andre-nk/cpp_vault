#include <iostream>
using namespace std;

int main()
{
  int n, k, i = 1;
  cin >> n;
  k = n;

  while (k != 0)
  {
    k = k / 10;
    i++;
  }

  for (int j = i - 1; j > 0; j--)
  {
    cout << n % 10;
    n = n / 10;
  }

  return 0;
}