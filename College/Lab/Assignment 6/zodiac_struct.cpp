#include <iostream>
using namespace std;

struct zodiac
{
  string name;
  int first_date;
  int first_month;
  int last_date;
  int last_month;
};

int main()
{
  zodiac zodiacs[12] = {
      {"Aquarius", 20, 1, 18, 2},
      {"Pisces", 19, 2, 20, 3},
      {"Aries", 21, 3, 19, 4},
      {"Taurus", 20, 4, 20, 5},
      {"Gemini", 21, 5, 20, 6},
      {"Cancer", 21, 6, 22, 7},
      {"Leo", 23, 7, 22, 8},
      {"Virgo", 23, 8, 22, 9},
      {"Libra", 23, 9, 22, 10},
      {"Scorpio", 23, 10, 21, 11},
      {"Sagitarius", 22, 11, 20, 12},
      {"Capricorn", 22, 12, 19, 1},
  };

  int day, month;

  cout << "Masukkan hari kelahiran: ";
  cin >> day;

  cout << "Masukkan bulan kelahiran: ";
  cin >> month;

  if ((day >= zodiacs[0].first_date && month == zodiacs[0].first_month) ||
      (day <= zodiacs[0].last_date && month == zodiacs[0].last_month))
    cout << "Bintang Anda adalah: " << zodiacs[0].name;

  else if ((day >= zodiacs[1].first_date && month == zodiacs[1].first_month) ||
           (day <= zodiacs[1].last_date && month == zodiacs[1].last_month))
    cout << "Bintang Anda adalah: " << zodiacs[1].name;

  else if ((day >= zodiacs[2].first_date && month == zodiacs[2].first_month) ||
           (day <= zodiacs[2].last_date && month == zodiacs[2].last_month))
    cout << "Bintang Anda adalah: " << zodiacs[2].name;

  else if ((day >= zodiacs[3].first_date && month == zodiacs[3].first_month) ||
           (day <= zodiacs[3].last_date && month == zodiacs[3].last_month))
    cout << "Bintang Anda adalah: " << zodiacs[3].name;

  else if ((day >= zodiacs[4].first_date && month == zodiacs[4].first_month) ||
           (day <= zodiacs[4].last_date && month == zodiacs[4].last_month))
    cout << "Bintang Anda adalah: " << zodiacs[4].name;

  else if ((day >= zodiacs[5].first_date && month == zodiacs[5].first_month) ||
           (day <= zodiacs[5].last_date && month == zodiacs[5].last_month))
    cout << "Bintang Anda adalah: " << zodiacs[5].name;

  else if ((day >= zodiacs[6].first_date && month == zodiacs[6].first_month) ||
           (day <= zodiacs[6].last_date && month == zodiacs[6].last_month))
    cout << "Bintang Anda adalah: " << zodiacs[6].name;

  else if ((day >= zodiacs[7].first_date && month == zodiacs[7].first_month) ||
           (day <= zodiacs[7].last_date && month == zodiacs[7].last_month))
    cout << "Bintang Anda adalah: " << zodiacs[7].name;

  else if ((day >= zodiacs[8].first_date && month == zodiacs[8].first_month) ||
           (day <= zodiacs[8].last_date && month == zodiacs[8].last_month))
    cout << "Bintang Anda adalah: " << zodiacs[8].name;

  else if ((day >= zodiacs[9].first_date && month == zodiacs[9].first_month) ||
           (day <= zodiacs[9].last_date && month == zodiacs[9].last_month))
    cout << "Bintang Anda adalah: " << zodiacs[9].name;

  else if ((day >= zodiacs[10].first_date && month == zodiacs[10].first_month) ||
           (day <= zodiacs[10].last_date && month == zodiacs[10].last_month))
    cout << "Bintang Anda adalah: " << zodiacs[10].name;

  else if ((day >= zodiacs[11].first_date && month == zodiacs[11].first_month) ||
           (day <= zodiacs[11].last_date && month == zodiacs[11].last_month))
    cout << "Bintang Anda adalah: " << zodiacs[11].name;

  return 0;
}