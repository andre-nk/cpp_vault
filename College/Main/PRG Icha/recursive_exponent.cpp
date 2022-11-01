#include <iostream>
using namespace std;

void recursive(int n){
  cout << n << endl;

  if (n == 1)
  {
    cout << n << " " << n * n << endl;
  }
  else
  {
    recursive(n - 1);
    cout << n << " " << n * n << endl;
  }
}

int main()
{
  recursive(5);
  return 0;
}