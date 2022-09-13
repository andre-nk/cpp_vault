#include <iostream>
using namespace std;

int main(){
  double todayRate = 0.000067; //Rate (1 USD = Rp14.880)
  double idr, usd;

  cout << "Program Konversi Mata Uang (IDR - USD)" << endl;
  cout << "Masukkan nominal uang (IDR): " << endl;
  cin >> idr;

  if(idr < 0){
    cout << "Nominal uang (IDR) harus lebih dari Rp0" << endl;
  } else {
    usd = idr * todayRate;
    cout << "Nilai nominal dalam USD adalah: $" << usd << endl;
  }

  return 0;
}
