#include <iostream>
using namespace std;

int main(){
  int a, b, c;

  cout << "Input two numbers:" << endl;
  cout << "(1/2) Input a:" << endl;
  cin >> a;

  cout << "(2/2) Input b:" << endl;
  cin >> b;

  while (b != 0)
  {
    c = a % b;
    a = b;
    b = c;
  }

  cout << "Factor: " << b << endl;
}