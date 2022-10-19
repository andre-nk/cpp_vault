#include <iostream>
using namespace std;

int main(){
  //? Compiler error (unsigned => range(0 -> 2 * initial_range))
  //? Return max range
  unsigned int n = -10;
  cout << n << endl;

  return 0;
}