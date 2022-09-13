#include <iostream>
#include <cmath>

using namespace std;

int main(){
  double a, b, c;

  cout << "Program Determinan" << endl;
  cin >> a >> b >> c;

  double determinant = (pow(b, 2)) - (4 * a * c);
  return 0;
}