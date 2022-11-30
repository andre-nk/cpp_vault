#include <iostream>
#include <string>
#include <stdio.h>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
#include <algorithm>
using namespace std;

char *Rack(int hargaeceran)
{
    if (hargaeceran >= 100000)
        return "A";
    else if (hargaeceran >= 80000)
        return "B";
    else if (hargaeceran >= 60000)
        return "C";
    else if (hargaeceran >= 40000)
        return "D";
    else if (hargaeceran < 20000)
        return "E";
}

// Deklarasi struck snack berisikan identitas dari snack
struct snack
{
    string merk;
    int hargagrosir, hargaswalayan, hargaeceran, rank, kode;
    float harga;
    int Rack;
} snack1[99];

// Fungsi "compare" yang berfungsi untuk membandingkan harga snack
bool compare(snack a, snack b)
{
    if (a.hargagrosir != b.hargagrosir)
    {
        return a.hargagrosir > b.hargagrosir;
    }
    if (a.hargaswalayan != b.hargaswalayan)
    {
        return a.hargaswalayan > b.hargaswalayan;
    }
    return (a.hargaeceran > b.hargaeceran);
}

// Fungsi "urutkan" yang berfungsi untuk mengurutkan snack
void urutkan(snack a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i].harga = a[i].hargaeceran;
    }
    sort(a, a + n, compare);
    for (int i = 0; i < n; i++)
    {
        a[i].rank = i + 1;
    }
}

// Fungsi "tampilkan" yang berfungsi untuk menampilkan data-data yang telah diinputkan
void tampilkan(snack a[], int n)
{
    system("cls");
    urutkan(snack1, n);
    cout << endl;
    cout << " DAFTAR HARGA " << endl;
    cout << " MATERI : PEMROGRAMAN C++ " << endl;
    cout << "________________________________________________________________________\n"
         << endl;
    cout << "----------------------------------------------------------------------" << endl;
    cout << "No.| Nama         |  Kode  |         Harga           |" << endl;
    cout << "   | Merk         |        | ------------------------|  Rack " << endl;
    cout << "   |              |        | Grosir  Swalayan Eceran | " << endl;
    cout << "----------------------------------------------------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << setiosflags(ios::left) << setw(5) << snack1[i].rank;
        cout << setiosflags(ios::left) << setw(14) << snack1[i].merk;
        cout << setiosflags(ios::left) << setw(10) << snack1[i].kode;
        cout << setiosflags(ios::left) << setw(10) << snack1[i].hargagrosir;
        cout << setiosflags(ios::left) << setw(10) << snack1[i].hargaswalayan;
        cout << setiosflags(ios::left) << setw(10) << snack1[i].hargaeceran;
        cout << setiosflags(ios::left) << setw(10) << Rack(snack1[i].harga) << endl;
    }
    cout << "________________________________________________________________________" << endl;
    cout << "\n"
         << endl;
}

// Fungsi "Inputdata" yang berfungsi untuk meminta input identitas snack pada user
void inputdata(snack snack[], int n)
{
    system("cls");

    // Perulangan untuk mengulang operasi sebanyak n yang diinputkan user
    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan merk snack " << i + 1 << " :";
        cin.ignore();
        getline(cin, snack1[i].merk);
        cout << "Masukkan angka kode produk: ";
        cin >> snack1[i].kode;
        cout << "Masukkan harga grosir : ";
        cin >> snack1[i].hargagrosir;
        cout << "Masukkan harga swalayan : ";
        cin >> snack1[i].hargaswalayan;
        cout << "Masukkan harga eceran: ";
        cin >> snack1[i].hargaeceran;
        cout << endl;

        // write to snack.txt in one line
        ofstream snackfile;
        snackfile.open("snack.txt", ios::app);
        snackfile << snack1[i].merk << " " << snack1[i].kode << " " << snack1[i].hargagrosir << " " << snack1[i].hargaswalayan << " " << snack1[i].hargaeceran << endl;
    }
    cout << "Data selesai dibuat.";
    system("cls");
}
int main()
{
    system("cls");
    int jumlahsnack, choice, pilihkode, pilihganti, carikode, snacklama;
    bool found;

    // read snack.txt
    ifstream snackfile;
    snackfile.open("snack.txt");
    if (snackfile.is_open())
    {
        snackfile >> jumlahsnack;
        for (int i = 0; i < jumlahsnack; i++)
        {
            snackfile >> snack1[i].merk;
            snackfile >> snack1[i].kode;
            snackfile >> snack1[i].hargagrosir;
            snackfile >> snack1[i].hargaswalayan;
            snackfile >> snack1[i].hargaeceran;
        }
    }

    cout << endl;
    cout << "\t    DAFTAR HARGA SNACK " << endl;
    cout << "\t==============================" << endl;
    cout << "\tMasukkan jumlah data : ";
    cin >> jumlahsnack;
    system("cls");
pilihan:
    cout << "    DAFTAR MENU OPERASI " << endl;
    cout << "==============================" << endl;
    cout << "\n[1] Input data snack\n[2] Tampil Harga Snack\n[3] Ubah data Snack\n[4] Cari data Snack\n[5] Tambah Snack\n[6] Exit\n\n";
    cout << "Menu apa yang anda cari?" << endl;
    cin >> choice;
    snack1[jumlahsnack];

    // Percabangan yang membagi pilihan yang dipilih user
    switch (choice)
    {
    case 1:
        inputdata(snack1, jumlahsnack);
        goto pilihan;
        break;
    case 2:
        tampilkan(snack1, jumlahsnack);
        goto pilihan;
        break;
    case 3:
    cobalagi:
        system("cls");
        cout << "Masukkan kode snack yang akan diganti: ";
        cin >> pilihkode;
        found = false;
        for (int i = 0; i < jumlahsnack; i++)
        {
            if (snack1[i].kode == pilihkode)
            {
                found = true;
                cout << "kode: " << snack1[i].kode << endl;
                cout << "Merk: " << snack1[i].merk << endl;
                cout << "hargagrosir: " << snack1[i].hargagrosir << endl;
                cout << "hargaswalayan: " << snack1[i].hargaswalayan << endl;
                cout << "hargaeceran: " << snack1[i].hargaeceran << endl;
            pilihankedua:
                cout << "Snack apa yang ingin diganti?\n[1]kode\n[2]Merk\n[3]harga Grosir\n[4]harga Swalayan\n[5]harga Eceran\n\n";
                cin >> pilihganti;
                switch (pilihganti)
                {
                case 1:
                    cout << "Ketikkan kode yang baru: ";
                    cin >> snack1[i].merk;
                    cout << "Snack berhasil diganti.";
                    system("cls");
                    goto pilihan;
                    break;
                case 2:
                    cout << "Ketikkan Snack yang baru: ";
                    cin.ignore();
                    getline(cin, snack1[i].merk);
                    cout << "Snack berhasil diganti.";
                    system("cls");
                    goto pilihan;
                    break;
                case 3:
                    cout << "Ketikkan harga Grosir yang baru: ";
                    cin >> snack1[i].hargagrosir;
                    cout << "Snack berhasil diganti.";
                    system("cls");
                    goto pilihan;
                    break;
                case 4:
                    cout << "Ketikkan harga Swalayan yang baru: ";
                    cin >> snack1[i].hargaswalayan;
                    cout << "Snack berhasil diganti.";
                    system("cls");
                    goto pilihan;
                    break;
                case 5:
                    cout << "Ketikkan harga Eceran yang baru: ";
                    cin >> snack1[i].kode;
                    cout << "Snack berhasil diganti.";
                    system("cls");
                    goto pilihan;
                    break;

                default:
                    cout << "Masukkan angka yang benar!";
                    system("cls");
                    goto pilihankedua;
                    break;
                }
            }
        }
        if (!found)
        {
            cout << "Snack tidak ditemukan!";
            goto cobalagi;
            break;
        }
        break;
    case 4:
        system("cls");
        cout << "Masukkan kode snack yang akan dicari: ";
        cin >> carikode;
        found = false;
        for (int i = 0; i < jumlahsnack; i++)
        {

            // Percabangan yang membagi dua keadaan jika kode sesuai dan jika tidak
            if (snack1[i].kode == carikode)
            {
                found = true;
                cout << "kode: " << snack1[i].kode << endl;
                cout << "Merk: " << snack1[i].merk << endl;
                cout << "Harga Grosir: " << snack1[i].hargagrosir << endl;
                cout << "Harga Swalayan: " << snack1[i].hargaswalayan << endl;
                cout << "Harga Eceran: " << snack1[i].hargaeceran << endl;
                cout << "Rack: " << Rack(snack1[i].harga) << endl;
                goto pilihan;
                break;
            }
        }
        if (!found)
        {
            cout << "Snack tidak ditemukan!";
            goto pilihan;
            break;
        }
        break;
    case 5:
        system("cls");
        cout << "Jumlah snack baru: ";
        int snackbaru;
        cin >> snackbaru;
        snacklama = jumlahsnack;
        jumlahsnack += snackbaru;
        snack1[jumlahsnack];
        for (int i = snacklama; i < jumlahsnack; i++)
        {
            cout << "Masukkan nama snack " << i + 1 << ":  ";
            cin.ignore();
            getline(cin, snack1[i].merk);
            cout << "Masukkan kode: ";
            cin >> snack1[i].kode;
            cout << "Masukkan Harga Grosir : ";
            cin >> snack1[i].hargagrosir;
            cout << "Masukkan Harga Swalayan : ";
            cin >> snack1[i].hargaswalayan;
            cout << "Masukkan Harga Eceran: ";
            cin >> snack1[i].hargaeceran;
            cout << endl;

            // write to file in one line
            ofstream file;
            file.open("snack.txt", ios::app);
            file << snack1[i].kode << " " << snack1[i].merk << " " << snack1[i].hargagrosir << " " << snack1[i].hargaswalayan << " " << snack1[i].hargaeceran << endl;
        }
        goto pilihan;
        break;
    case 6:
        cout << "Terimakasih telah menggunakan program ini!";
        return -1;
        break;
    default:
        cout << "Masukkan harga yang benar!";
        goto pilihan;
        break;
    }
}
