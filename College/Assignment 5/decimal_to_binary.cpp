#include <iostream>
using namespace std;

int main()
{
  //decimal to binary
  int decimal;
  int binary[8];
  int i = 0;
  cout << "Enter a decimal number: ";
  cin >> decimal;
  while (decimal > 0)
  {
    binary[i] = decimal % 2;
    decimal = decimal / 2;
    i++;
  }
  cout << "The binary number is: ";
  for (int j = i - 1; j >= 0; j--)
  {
    cout << binary[j];
  }
  cout << endl;
  return 0;
}