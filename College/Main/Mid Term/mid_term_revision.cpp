#include <iostream>
using namespace std;

struct Sales
{
  string phoneName;
  int quantity;
};

int main()
{
  int vivoQuantity = 0;
  int vivoSales = 0;

  int samsungQuantity = 0;
  int samsungSales = 0;

  int nokiaQuantity = 0;
  int nokiaSales = 0;

  int iPhoneQuantity = 0;
  int iPhoneSales = 0;

  Sales salesList[10];

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

  cout << "Vivo terjual " << vivoQuantity << " unit, dengan total penjualan " << vivoSales << endl;
  cout << "Samsung terjual " << samsungQuantity << " unit, dengan total penjualan " << samsungSales << endl;
  cout << "Nokia terjual " << nokiaQuantity << " unit, dengan total penjualan " << nokiaSales << endl;
  cout << "iPhone terjual " << iPhoneQuantity << " unit, dengan total penjualan " << iPhoneSales << endl;

  return 0;
}