#include <iostream>
using namespace std;

int fpb_rec(int a, int b)
{
  if (a == 0 || b == 0)
  {
    return 0;
  }
  else if (a == b)
  {
    return a;
  }
  else if (a > b)
  {
    return fpb_rec(a - b, b);
  }
  else
  {
    return fpb_rec(a, b - a);
  }
}

int main()
{
  int n, m;
  cin >> n >> m;

  cout << fpb_rec(n, m) << endl;
  return 0;
}
