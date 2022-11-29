#include <iostream>
using namespace std;

//Deklarasi struct Anak
struct Anak{
  double weight;
  double height;
};

int main()
{
  int n;
  cin >> n;

  if (n > 1000)
  {
    cout << "Maaf, input jumlah anak tidak bisa melebihi 1000 anak" << endl;
    return 0;
  }

  int below_height = 0;
  int below_weight = 0;

  // Nilai total BB dan TB menggunakan double agar tidak terjadi pembulatan (mempengaruhi seleksi yang di bawah rata-rata)
  double total_height = 0;
  double total_weight = 0;
  Anak dataAnak[n];

  // Input BB dan TB tiap anak dan menghitung total BB dan TB
  for (int i = 0; i < n; i++)
  {
    cin >> dataAnak[i].weight >> dataAnak[i].height;

    if (dataAnak[i].weight > 150)
    {
      cout << "Maaf, input berat badan anak tidak bisa melebihi 150kg" << endl;
      return 0;
    }

    if(dataAnak[i].height > 200)
    {
      cout << "Maaf, input tinggi badan anak tidak bisa melebihi 150cm" << endl;
      return 0;
    }

    total_height += dataAnak[i].height;
    total_weight += dataAnak[i].weight;
  }

  // Perhitungan rata-rata dan seleksi
  for (int i = 0; i < n; i++)
  {
    if (dataAnak[i].weight < (total_weight / n))
    {
      below_weight++;
    }

    if (dataAnak[i].height < (total_height / n))
    {
      below_height++;
    }
  }

  cout << "Banyak anak dengan berat badan di bawah rata-rata: " << below_weight << endl;
  cout << "Banyak anak dengan tinggi di bawah rata-rata: " << below_height << endl;

  return 0;
}