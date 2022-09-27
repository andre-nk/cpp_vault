#include <iostream>
using namespace std;

int main()
{
  //n => jumlah lapis piramida
  //i => patokan perulangan pada tiap lapisan
  //j => patokan perulangan untuk print *
  //k => patokan perulangan untuk spasi di kiri piramida
  int n, i = 1, j = 0, k = 0;

  //Input tinggi piramida
  cout << "Enter number of rows: " << endl;
  cin >> n;

  //Loop untuk tiap baris piramida (dimulai dari atas)
  while (i <= n)
  {

    //Loop untuk mencetak spasi di kiri piramida
    while (k < n - i)
    {
      cout << "   ";
      k++;
    }

    //Reset ulang nilai k untuk perulangan selanjutnya
    k = 0;

    //Loop untuk print *
    while (j < 2 * i - 1)
    {
      cout << " * ";
      j++;
    }

    j = 0;
    i++;

    //Membuat baris baru untuk perulangan selanjutnya (tidak ada spasi di sisi kanan piramida)
    cout << endl;
  }
}