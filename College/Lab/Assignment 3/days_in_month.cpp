#include <iostream>
using namespace std;

int main()
{
  int month;
  cout << "Jumlah Hari dalam Bulan" << endl;

  cin >> month;

  switch (month)
  {
  case 1:
    cout << "31 hari" << endl;
    break;

  case 2:
    cout << "28 hari" << endl;
    break;

  case 3:
    cout << "31 hari" << endl;
    break;

  case 4:
    cout << "30 hari" << endl;
    break;

  case 5:
    cout << "31 hari" << endl;
    break;

  case 6:
    cout << "30 hari" << endl;
    break;

  case 7:
    cout << "31 hari" << endl;
    break;

  case 8:
    cout << "31 hari" << endl;
    break;

  case 9:
    cout << "30 hari" << endl;
    break;

  case 10:
    cout << "31 hari" << endl;
    break;

  case 11:
    cout << "30 hari" << endl;
    break;

  case 12:
    cout << "31 hari" << endl;
    break;

  default:
    cout << "Input bulan invalid" << endl;
    break;
  }
}