#include <iostream>
using namespace std;

int main(){
  char a = 64;
  int n = 65;
  char sample[5] = {'1', '2', '3', '4', '5'};
  int sample_total = 0;

  //? Forces char variable with int value to be interpreted as int
  cout << static_cast<int>(a) << endl;

  //? Forces int variable with char value to be interpreted as char
  cout << static_cast<char>(n) << endl;

  for (int i = 0; i < 5; i++)
  {
    sample[i] = static_cast<int>(sample[i]);
    sample_total += sample[i];
    cout << sample_total << endl;
  }

  cout << sample_total << endl;
  
  return 0;
}