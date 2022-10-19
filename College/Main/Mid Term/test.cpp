//FILE PENGERJAAN SOAL UTS PEMROGRAMAN 2022 NO. 4
// Oleh: Andreas Notokusumo (NIM: 22/493183/PA/21167)

#include <iostream>
using namespace std;

// Deklarasi struct Sales (penjualan) sesuai data tabel yang disederhanakan (diambil data yang perlu untuk output)
struct Sales
{
  string phoneName;
  int quantity;
};

int main()
{ 
  //Deklarasi beberapa integers untuk output 
  int vivoQuantity = 0;
  int vivoSales = 0;

  int samsungQuantity = 0;
  int samsungSales = 0;

  int nokiaQuantity = 0;
  int nokiaSales = 0;

  int iPhoneQuantity = 0;
  int iPhoneSales = 0;

  //Deklarasi array of struct dengan panjang 10 (hari dari awal bulan) sesuai data tabel 
  Sales salesList[10];

  //Perulangan untuk meminta input pengguna mengenai 10 data penjualan dan sekaligus menghitung total cacah dan penjualan produk
  for (int i = 0; i < 10; i++)
  {
    cin >> salesList[i].phoneName;
    cin >> salesList[i].quantity;

    if (salesList[i].phoneName == "Vivo")
    {
      vivoQuantity += salesList[i].quantity;
      vivoSales += salesList[i].quantity * 900;
    }
    else if (salesList[i].phoneName == "Samsung")
    {
      samsungQuantity += salesList[i].quantity;
      samsungSales += salesList[i].quantity * 1200;
    }
    else if (salesList[i].phoneName == "Nokia")
    {
      nokiaQuantity += salesList[i].quantity;
      nokiaSales += salesList[i].quantity * 1100;
    }
    else if (salesList[i].phoneName == "iPhone")
    {
      iPhoneQuantity += salesList[i].quantity;
      iPhoneSales += salesList[i].quantity * 1800;
    }
  }

  cout << endl;
  //Finalisasi program berupa output data penjualan empat merk handphone
  cout << "Vivo terjual " << vivoQuantity << " unit, dengan total penjualan " << vivoSales << endl;
  cout << "Samsung terjual " << samsungQuantity << " unit, dengan total penjualan " << samsungSales << endl;
  cout << "Nokia terjual " << nokiaQuantity << " unit, dengan total penjualan " << nokiaSales << endl;
  cout << "iPhone terjual " << iPhoneQuantity << " unit, dengan total penjualan " << iPhoneSales << endl;

  return 0;
}