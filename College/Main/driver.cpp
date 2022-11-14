#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for (int i = n; i >= 0; i -= 2)
  {
    cout << i << "";
    if (i == 3)
      break;
  }
}