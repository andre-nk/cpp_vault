#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double input;
  cin >> input;

  if(floor(input) == input){
    cout << input << " adalah bulat" << endl;
  } else {
    cout << input << " tidak bulat" << endl;
  }

  return 0;
}