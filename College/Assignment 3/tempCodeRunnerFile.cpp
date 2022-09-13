#include <iostream>
using namespace std;

int main(){
  int a, b, c;
  int max = a;

  cout << "Bilangan Terbesar dari 3 Bilangan" << endl;
  cin >> a >> b >> c;

  if((a > b) && (a > c)){
    max = a;
  }

  if((b > a) && (b > c)){
    max = b;
  }

  if((c > a) && (c > b)){
    max = c;
  }

  cout << "Bilangan terbesar: " << max << endl;
  return 0;
}