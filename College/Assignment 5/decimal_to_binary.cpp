#include <iostream>
using namespace std;

int main()
{
  int decimal, n = decimal, i = 0;
  char binary[11];

  cout << "Masukkan bilangan desimal:" << endl;
  cin >> decimal;

  if (decimal != 0)
  {
    while (decimal != 0)
    {
      if(decimal % 2 == 1){
        binary[i] = '1';
      } else {
        binary[i] = '0';
      }
      decimal = decimal / 2;
      i++;
    }
  }

  cout << "Hasil Konversi: ";
  for (int j = i - 1; j >= 0; j--)
  {
    cout << binary[j];
  }

  return 0;
}