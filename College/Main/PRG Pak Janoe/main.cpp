#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int x[10];
int N = 10, s = 0;

int main()
{
  int hasil = 0, x[10], e[10] = {1, 6, 2, 7, 4, 5, 0, 9, 8, 3};
  for (int i = 0; i < 10; i++)
    x[i] = 2 * i + 3;
  for (int i = 0; i < 10; i++)
    hasil += x[e[i]];
  cout << hasil;
  return 0;
}