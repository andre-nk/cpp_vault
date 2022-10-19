#include <iostream>
using namespace std;

struct Product
{
  string productCode;
  string name;
  int price;
  int quantity;
};

int main()
{
  int n;
  int totalProductQuantity = 0;
  int totalProductPrice = 0;
  int productPriceAverage = 0;

  cout << "Berapa banyak produk yang ingin dimasukkan: ";
  cin >> n;

  if (n > 50)
  {
    cout << "Maaf, masukkan banyak produk tidak dapat lebih dari 50 produk" << endl;
    getchar();
    return 0;
  }

  Product productList[n];

  cout << "Masukkan data produk" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << "Masukkan kode barang: ";
    cin >> productList[i].productCode;
    cout << "Masukkan nama barang: ";
    cin >> productList[i].name;
    cout << "Masukkan harga barang: ";
    cin >> productList[i].price;
    cout << "Masukkan jumlah barang: ";
    cin >> productList[i].quantity;
    cout << endl;

    totalProductQuantity += productList[i].quantity;
    totalProductPrice += productList[i].price;
  }

  cout << "Data Barang" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << productList[i].productCode << endl;
    cout << productList[i].name << endl;
    cout << productList[i].price << endl;
    cout << productList[i].quantity << endl;
  }

  cout << "Jumlah semua barang yang dimasukkan: " << totalProductQuantity << " barang." << endl;
  cout << "Harga rata-rata barang: " << (totalProductPrice / n) << endl;
  return 0;
}