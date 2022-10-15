#include <iostream>
using namespace std;

int main(){
  int D, c = 0;
  cin >> D;

  while (D > 0)
  {
    if(D % 2 == 1){
      c++;
      D = D / 2;
    } else {
      D = D /2;
    }
  }

  if(c % 2 != 0){
    cout << "parity ganjil"; 
  } else {
    cout << "parity genap";
  }
  
  return 0;
}