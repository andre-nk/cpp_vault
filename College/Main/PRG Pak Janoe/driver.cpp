#include <iostream>
#include <math.h>
using namespace std;

struct S{
  int a;
};

S test(){
  S sample = S{2};
  return sample;
}

int main()
{
  cout << test().a << endl;
  return;
}