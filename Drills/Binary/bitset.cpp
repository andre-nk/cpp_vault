#include <iostream>
#include <bitset>

using namespace std;

int main(){
  unsigned short int data = 15;

  cout << "Dec: " << showbase << dec << data << endl; //? Different standard integer data representations
  cout << "Oct: " << showbase << oct << data << endl;
  cout << "Hex: " << showbase << hex << data << endl;
  cout << "Bin: " << showbase << bitset<16>(data) << endl; //? Convert to binary

  return 0;
}