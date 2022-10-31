#include <iostream>
using namespace std;
int fun(int p)
{
  int c = 0;
  for (p = 2 * p; p > 0; p >>= 2)
    c++;
  return c;
}

void foon(int p)
{
  for (int c = fun(p); c >= 0; c--)
    cout << "*";
}

int main()
{
  foon(2);
  cout << 2 >>= 2;
  cout << endl;
  return 0;
}