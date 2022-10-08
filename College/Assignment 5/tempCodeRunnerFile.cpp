#include <iostream>
using namespace std;

int main()
{
  int n;

  cout << "How many integers: ";
  cin >> n;

  int A[n];

  cout << "Write the integers separated by a space: ";
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }

  // Array penanda indeks yang terkecil (semua bernilai False pada awalnya)
  bool present[n + 1];
  for (int i = 0; i < n + 1; i++)
  {
    present[i] = false;
  }

  // Tandai indeks yang memungkinkan (lebih dari nol (positif)) dan kurang dari n (tidak mungkin n + 1)
  for (int i = 0; i < n; i++)
  {
    if (A[i] > 0 && A[i] <= n)
    {
      //Ubah tanda menjadi true sesuai dengan indeks A[i]
      present[A[i]] = true;
    }
  }

  //Keluarkan elemen terkecil yang tidak muncul di array awal
  for (int i = 1; i <= n; i++)
  {
    if (!present[i])
    {
      cout << i << endl;
      return 0;
    }
  }

  //Output khusus array berisi {1, 2, 3}
  cout << n + 1 << endl;
  return 0;
}
