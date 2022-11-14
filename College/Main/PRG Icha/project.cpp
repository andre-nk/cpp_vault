#include <iostream>
#include <iomanip>
using namespace std;

// PROGRAM MENGHITUNG OMZET DAN ANALISIS PENJUALAN ITEM

// Deklarasi struct Item
struct Item
{
  string name;
  int price;
  int quantity;
  int total;
};

// Prototipe fungsi sort
void sort(Item arr[], int n);

// Prototipe fungsi binary search
int binarySearch(Item array[], int x, int low, int high);

int main()
{
  cout << "Program Analisis Penjualan Item" << endl;
  cout << "Oleh Kelompok 4" << endl;
  cout << "===============================" << endl;

  getchar();

  // Input panjang item yang ingin dimasukkan
  cout << "Masukkan panjang item yang ingin dimasukkan: ";
  int n;
  cin >> n;

  // Deklarasi array dan pengisian array
  Item arr[n];
  for (int i = 0; i < n; i++)
  {
    cout << "Barang ke- " << i + 1 << endl;
    cout << "Masukkan nama item: ";
    cin >> arr[i].name;
    cout << "Masukkan harga item: ";
    cin >> arr[i].price;
    cout << "Masukkan jumlah item: ";
    cin >> arr[i].quantity;
    cout << "=======================" << endl;
    cout << endl;
    // Menghitung total nilai penjualan
    arr[i].total = arr[i].price * arr[i].quantity;
  }

  // Mengurutkan array berdasarkan total nilai tiap Item
  sort(arr, n);

  // Mencetak array yang telah terurut
  for (int i = 0; i < n; i++)
  {
    cout << right << i + 1 << ".) " << arr[i].name << setw(4) << " - " << setw(4) << "Rp" << arr[i].price << setw(4) << " - " << setw(4) << arr[i].quantity << "x" << setw(4) << "-" << setw(4) << "Rp" << arr[i].total << endl;
  }

  cout << endl;
  // Kalkulasi total omzet dan total penjualan item
  int totalPrice = 0;
  int totalQuantity = 0;
  for (int i = 0; i < n; i++)
  {
    totalPrice += arr[i].price * arr[i].quantity;
    totalQuantity += arr[i].quantity;
  }

  cout << right << "Total Omzet:" << "Rp" << totalPrice << endl;
  cout << right << "Total Penjualan:" << totalQuantity << " item" << endl;

  // search highest total
  int highestTotal = arr[0].total;
  int highestIndex = binarySearch(arr, highestTotal, 0, n - 1);

  cout << right << "Item dengan nilai tertinggi: " << arr[highestIndex].name << " dengan total " << arr[highestIndex].total << endl;

  return 0;
}

// Implementasi fungsi sort
void sort(Item arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j].total < arr[j + 1].total)
      {
        Item temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

// binary search
int binarySearch(Item array[], int x, int low, int high)
{
  if (high >= low)
  {
    int mid = (low + high) / 2;
    if (array[mid].total == x)
    {
      return mid;
    }
    else if (array[mid].total > x)
    {
      return binarySearch(array, x, mid + 1, high);
    }
    else
    {
      return binarySearch(array, x, low, mid - 1);
    }
  }
  return -1;
}
