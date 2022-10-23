#include <iostream>
using namespace std;

//? constexpr is a constant variable that get processed at compile time
//? meaning that the code lines won't be read again when the binary file is opened
//? notice the location is outside of the main function (runtime process)
constexpr int a = 4;

int main()
{
  int b = 5; //? This is a runtime variable

  cout << a + b << endl; //? Will result in error due to b is not available yet on compile time

  return 0;
}