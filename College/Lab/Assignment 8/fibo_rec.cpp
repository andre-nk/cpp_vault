#include <iostream>
using namespace std;

int fibo_rec(int n)
{
  if (n == 0 || n == 1)
  {
    return n;
  }
  else
  {
    return fibo_rec(n - 1) + fibo_rec(n - 2);
  }
}

int main()
{
  int n;
  cin >> n;

  cout << fibo_rec(n) << endl;
  return 0;
}