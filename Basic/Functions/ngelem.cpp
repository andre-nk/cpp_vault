#include <iostream>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a;
  cin >> b;

  if(a < b){
    c = a;
    a = b;
    b = c;
  } else if (b < a) {
    c = a + b;
  } else {
    a = b;
    b = a;
    c = a + b;
  }

  cout << c << endl;
}
