#include <iostream>
#include <stdlib.h>

using namespace std;

void pilihOperasi(int &pilihanOperasi);
void penjumlahan();
void pengurangan();
void determinan();
void perkalian();
void transpose();
void invers();
int inputMatriksPersegi(int &arrayA2, int &arrayB2, int &arrayA3, int &arrayB3);

int main()
{
     system("clear");
     int pilihanOperasi = 0;
     char pilihanLanjut = 'y';

     cout << "THE MATRIX by JonBlo" << endl;
     cout << "Tekan tombol apapun untuk melanjutkan..." << endl;
     getchar();

     while (pilihanLanjut == 'y')
     {
          pilihOperasi(pilihanOperasi);

          if (pilihanOperasi == 0)
          {
               cout << "Terima kasih telah menggunakan program ini." << endl;
               cout << "Tekan tombol apapun untuk keluar..." << endl;
               getchar();

               return 0;
          }
          else if (pilihanOperasi == 1)
          {
               penjumlahan();
          }
          else if (pilihanOperasi == 2)
          {
               pengurangan();
          }
          else if (pilihanOperasi == 3)
          {
               determinan();
          }
          else if (pilihanOperasi == 4)
          {
               perkalian();
          }
          else if (pilihanOperasi == 5)
          {
               transpose();
          }
          else
          {
               cout << "Pilihan tidak tersedia." << endl;
          }

          cout << "Apakah anda ingin melakukan operasi lain? (y/n) ";
          cin >> pilihanLanjut;
     }

     cout << "Terima kasih telah menggunakan program ini." << endl;
     cout << "Tekan tombol apapun untuk keluar..." << endl;
     getchar();

     return 0;
}

void pilihOperasi(int &pilihanOperasi)
{
     system("clear");
     cout << "PILIHAN OPERASI:" << endl;
     cout << "1.) Penjumlahan" << endl;
     cout << "2.) Pengurangan" << endl;
     cout << "3.) Determinan" << endl;
     cout << "4.) Perkalian" << endl;
     cout << "5.) Transpos" << endl;
     cout << "0.) Keluar" << endl;
     cout << "Ketik nomor operasi yang akan dilakukan: ";
     cin >> pilihanOperasi;
}

int inputMatriksPersegi(int (&arrayA2)[2][2], int (&arrayB2)[2][2], int (&arrayA3)[3][3], int (&arrayB3)[3][3], bool determinant)
{
     int pilihanUkuran = 0;

     cout << "1.) Matriks 2x2" << endl;
     cout << "2.) Matriks 3x3" << endl;
     cout << "Ketik pilihan ukuran matriks: ";
     cin >> pilihanUkuran;

     if (pilihanUkuran == 1)
     {
          system("clear");
          cout << "Masukkan elemen-elemen matriks A (ukuran 2x2): " << endl;
          for (int i = 0; i < 2; i++)
          {
               for (int j = 0; j < 2; j++)
               {
                    cin >> arrayA2[i][j];
               }
          }

          if (!determinant)
          {
               cout << "Masukkan elemen-elemen matriks B (ukuran 2x2): " << endl;
               for (int i = 0; i < 2; i++)
               {
                    for (int j = 0; j < 2; j++)
                    {
                         cin >> arrayB2[i][j];
                    }
               }
          }
     }
     else if (pilihanUkuran == 2)
     {
          system("clear");
          cout << "Masukkan elemen-elemen matriks A (ukuran 3x3): " << endl;
          for (int i = 0; i < 3; i++)
          {
               for (int j = 0; j < 3; j++)
               {
                    cin >> arrayA3[i][j];
               }
          }

          if (!determinant)
          {
               cout << "Masukkan elemen-elemen matriks B (ukuran 3x3): " << endl;
               for (int i = 0; i < 3; i++)
               {
                    for (int j = 0; j < 3; j++)
                    {
                         cin >> arrayB3[i][j];
                    }
               }
          }
     }

     return pilihanUkuran;
}

void penjumlahan()
{
     int arrayA2[2][2] = {
         {0, 0},
         {0, 0}};
     int arrayB2[2][2] = {
         {0, 0},
         {0, 0}};
     int arrayA3[3][3] = {
         {0, 0, 0},
         {0, 0, 0},
         {0, 0, 0}};
     int arrayB3[3][3] = {
         {0, 0, 0},
         {0, 0, 0},
         {0, 0, 0}};

     cout << "PENJUMLAHAN DUA MATRIKS" << endl;
     cout << "Pilih ukuran matriks yang akan dijumlahkan:" << endl;
     int pilihanUkuran = inputMatriksPersegi(arrayA2, arrayB2, arrayA3, arrayB3, false);

     if (pilihanUkuran == 1)
     {
          cout << "Hasil penjumlahan matriks A dan B (ukuran 2x2): " << endl;
          for (int i = 0; i < 2; i++)
          {
               for (int j = 0; j < 2; j++)
               {
                    cout << arrayA2[i][j] + arrayB2[i][j] << " ";
               }
               cout << endl;
          }
     }
     else if (pilihanUkuran == 2)
     {
          cout << "Matriks hasil penjumlahan: " << endl;
          for (int i = 0; i < 3; i++)
          {
               for (int j = 0; j < 3; j++)
               {
                    cout << arrayA3[i][j] + arrayB3[i][j] << " ";
               }
               cout << endl;
          }
     }
}

void pengurangan()
{
     int arrayA2[2][2] = {
         {0, 0},
         {0, 0}};
     int arrayB2[2][2] = {
         {0, 0},
         {0, 0}};
     int arrayA3[3][3] = {
         {0, 0, 0},
         {0, 0, 0},
         {0, 0, 0}};
     int arrayB3[3][3] = {
         {0, 0, 0},
         {0, 0, 0},
         {0, 0, 0}};

     cout << "PENGURANGAN DUA MATRIKS" << endl;
     cout << "Pilih ukuran matriks yang akan dikurangkan:" << endl;
     int pilihanUkuran = inputMatriksPersegi(arrayA2, arrayB2, arrayA3, arrayB3, false);

     if (pilihanUkuran == 1)
     {
          cout << "Hasil pengurangan matriks A dan B (ukuran 2x2): " << endl;
          for (int i = 0; i < 2; i++)
          {
               for (int j = 0; j < 2; j++)
               {
                    cout << arrayA2[i][j] - arrayB2[i][j] << " ";
               }
               cout << endl;
          }
     }
     else if (pilihanUkuran == 2)
     {
          cout << "Matriks hasil pengurangan: " << endl;
          for (int i = 0; i < 3; i++)
          {
               for (int j = 0; j < 3; j++)
               {
                    cout << arrayA3[i][j] - arrayB3[i][j] << " ";
               }
               cout << endl;
          }
     }
}

void determinan()
{
     int arrayA2[2][2] = {
         {0, 0},
         {0, 0}};
     int arrayA3[3][3] = {
         {0, 0, 0},
         {0, 0, 0},
         {0, 0, 0}};

     cout << "DETERMINAN MATRIKS" << endl;
     cout << "Pilih ukuran matriks yang akan dicari determinannya:" << endl;
     int pilihanUkuran = inputMatriksPersegi(arrayA2, arrayA2, arrayA3, arrayA3, true);

     if (pilihanUkuran == 1)
     {
          cout << "Determinan matriks A (ukuran 2x2): " << endl;
          cout << arrayA2[0][0] * arrayA2[1][1] - arrayA2[0][1] * arrayA2[1][0] << endl;
     }
     else if (pilihanUkuran == 2)
     {
          cout << "Determinan matriks A (ukuran 3x3): " << endl;
          cout << arrayA3[0][0] * arrayA3[1][1] * arrayA3[2][2] + arrayA3[0][1] * arrayA3[1][2] * arrayA3[2][0] + arrayA3[0][2] * arrayA3[1][0] * arrayA3[2][1] - arrayA3[0][2] * arrayA3[1][1] * arrayA3[2][0] - arrayA3[0][1] * arrayA3[1][0] * arrayA3[2][2] - arrayA3[0][0] * arrayA3[1][2] * arrayA3[2][1] << endl;
     }
}

void perkalian()
{
     system("clear");

     int An, Am;
     int Bn, Bm;

     cout << "Masukkan baris matriks A: ";
     cin >> An;
     cout << "Masukkan kolom matriks A: ";
     cin >> Am;

     cout << "Masukkan baris matriks B: ";
     cin >> Bn;
     cout << "Masukkan kolom matriks B: ";
     cin >> Bm;

     if (Am == Bn)
     {
          int A[An][Am];
          int B[Bn][Bm];
          int C[An][Bm];

          cout << "Masukkan elemen matriks A: " << endl;
          for (int i = 0; i < An; i++)
          {
               for (int j = 0; j < Am; j++)
               {
                    cin >> A[i][j];
               }
          }

          cout << "Masukkan elemen matriks B: " << endl;
          for (int i = 0; i < Bn; i++)
          {
               for (int j = 0; j < Bm; j++)
               {
                    cin >> B[i][j];
               }
          }

          for (int i = 0; i < An; i++)
          {
               for (int j = 0; j < Bm; j++)
               {
                    C[i][j] = 0;
                    for (int k = 0; k < Bn; k++)
                    {
                         C[i][j] += A[i][k] * B[k][j];
                    }
               }
          }

          cout << "Hasil perkalian matriks A dan B: " << endl;
          for (int i = 0; i < An; i++)
          {
               for (int j = 0; j < Bm; j++)
               {
                    cout << C[i][j] << " ";
               }
               cout << endl;
          }
     }
     else
     {
          cout << "Matriks tidak dapat dikalikan" << endl;
     }
}

void transpose()
{
     system("clear");

     int An, Am;

     cout << "Masukkan baris matriks A: ";
     cin >> An;
     cout << "Masukkan kolom matriks A: ";
     cin >> Am;

     int A[An][Am];
     int B[Am][An];

     cout << "Masukkan elemen matriks A: " << endl;
     for (int i = 0; i < An; i++)
     {
          for (int j = 0; j < Am; j++)
          {
               cin >> A[i][j];
          }
     }

     for (int i = 0; i < An; i++)
     {
          for (int j = 0; j < Am; j++)
          {
               B[j][i] = A[i][j];
          }
     }

     cout << "Hasil transpose matriks A: " << endl;
     for (int i = 0; i < Am; i++)
     {
          for (int j = 0; j < An; j++)
          {
               cout << B[i][j] << " ";
          }
          cout << endl;
     }
}