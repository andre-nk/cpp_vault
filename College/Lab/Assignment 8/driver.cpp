#include <iostream>
using namespace std;

void hh(int n)
{
  if (n > 0)
  {
    hh(n - 1);
    for (int i = 1; i <= n; i++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

int main()
{
  cout << hh(5) << endl;
}