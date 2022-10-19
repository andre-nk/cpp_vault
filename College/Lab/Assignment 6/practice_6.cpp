#include <iostream>
using namespace std;

struct fullName
{
  string firstName;
  string lastName;
};

struct studentRecord
{
  fullName name;
  string idNum;
  float gpa;
};

int main()
{
  int n;

  cout << "Masukkan banyaknya mahasiswa: ";
  cin >> n;

  studentRecord students[n];

  cout << "Masukkan Data Mahasiswa" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << "Nama depan: ";
    cin >> students[i].name.firstName;
    cout << "Nama belakang: ";
    cin >> students[i].name.lastName;
    cout << "NIM: ";
    cin >> students[i].idNum;
    cout << "IPK: ";
    cin >> students[i].gpa;
    cout << endl;
  }

  cout << "Data Mahasiswa" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << students[i].name.firstName << endl;
    cout << students[i].name.lastName << endl;
    cout << students[i].idNum << endl;
    cout << students[i].gpa << endl;
    cout << endl;
  }

  return 0;
}