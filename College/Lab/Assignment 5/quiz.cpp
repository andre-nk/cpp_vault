#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  int var = 30;
  int var2 = 90;
  int *ptr = &var;
  int *test = 20;

  cout << *ptr << " " << &var2;

  return 0;
}