#include <iostream>
using namespace std;

// Function prototypes
int inc(int &number);

// Test Driver
int main()
{
  int n = 8;
  cout << "Before calling function, n is " << n << endl; // 8
  int result = inc(n);
  cout << "After calling function, n is " << n << endl; // 8
  cout << "result is " << result << endl;
} // 9

// Function definitions
int inc(int &number)
{
  ++number; // Modify parameter, no effect to caller
  return number;
}