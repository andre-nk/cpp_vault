#include <iostream>
using namespace std;

int reverse_int_rec(int n, int rev = 0)
{
  if (n == 0)
    return rev;
  else
    return reverse_int_rec(n / 10, rev * 10 + n % 10);
}

int main()
{
  int n;
  cin >> n;

  cout << reverse_int_rec(n) << endl;
  return 0;
}
