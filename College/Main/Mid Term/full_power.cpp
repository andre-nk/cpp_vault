#include <iostream>
using namespace std;

int main(){
  //decimal to binary
  int n;
  cin >> n;
  int binary[8];
  int i = 0;
  while(n > 0){
    binary[i] = n % 2;
    n = n / 2;
    i++;
  }
  return 0;
}