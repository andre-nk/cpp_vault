#include <iostream>
using namespace std;

int main(){
  int limit, temp, sum = 0;

  cout << "Masukkan jumlah angka yang ingin dijumlahkan: ";
  cin >> limit;

  int numbers[limit];

  for (int i = 0; i < limit; i++)
  {
    cout << "Masukkan angka ke-" << i << " : ";
    cin >> temp;

    numbers[i] = temp; 
  }

  for (int j = 0; j < limit; j++)
  {
    sum += numbers[j];
  }
  
  cout << sum << endl;

  return 0;
}