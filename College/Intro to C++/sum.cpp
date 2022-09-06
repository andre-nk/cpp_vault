#include <iostream>
using namespace std;

int main(){
  int a, b, result;

  cout << "Program Penjumlahan Dua Bilangan" << endl;
  cout << "Masukkan dua bilangan dalam satu baris dengan spasi (contoh: 2 5)" << endl;

  cin >> a >> b;

  result = a + b;
  cout << "Hasil penjumlahan: " << result << endl;
  return 0;
}