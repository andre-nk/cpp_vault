#include <iostream>
using namespace std;

int main()
{
  int day;
  string month;
  string zodiac;

  cout << "Zodiac Program" << endl;
  cout << "Input date:" << endl;
  cin >> day;

  cout << "Input nama bulan: (Capital Case)" << endl;
  cin >> month;

  if (day < 31)
  {
    if (month == "Maret")
    {
      if (day < 21)
      {
        zodiac = "Pisces";
      }
      else
      {
        zodiac = "Aries";
      }
    }
    else if (month == "April")
    {
      if (day < 20)
      {
        zodiac = "Aries";
      }
      else
      {
        zodiac = "Taurus";
      }
    }
    else if (month == "Mei")
    {
      if (day < 21)
      {
        zodiac = "Taurus";
      }
      else
      {
        zodiac = "Gemini";
      }
    }
    else if (month == "Juni")
    {
      if (day < 21)
      {
        zodiac = "Gemini";
      }
      else
      {
        zodiac = "Cancer";
      }
    }
    else if (month == "Juli")
    {
      if (day < 23)
      {
        zodiac = "Cancer";
      }
      else
      {
        zodiac = "Leo";
      }
    }
    else if (month == "Agustus")
    {
      if (day < 23)
      {
        zodiac = "Leo";
      }
      else
      {
        zodiac = "Virgo";
      }
    }
    else if (month == "September")
    {
      if (day < 23)
      {
        zodiac = "Virgo";
      }
      else
      {
        zodiac = "Libra";
      }
    }
    else if (month == "Oktober")
    {
      if (day < 23)
      {
        zodiac = "Libra";
      }
      else
      {
        zodiac = "Scorpio";
      }
    }
    else if (month == "November")
    {
      if (day < 22)
      {
        zodiac = "Scorpio";
      }
      else
      {
        zodiac = "Sagitarius";
      }
    }
    else if (month == "Desember")
    {
      if (day < 22)
      {
        zodiac = "Sagitarius";
      }
      else
      {
        zodiac = "Capricorn";
      }
    }
    else if (month == "Januari")
    {
      if (day < 20)
      {
        zodiac = "Capricorn";
      }
      else
      {
        zodiac = "Aquarius";
      }
    }
    else if (month == "Februari")
    {
      if (day < 19)
      {
        zodiac = "Aquarius";
      }
      else
      {
        zodiac = "Pisces";
      }
    }
    else
    {
      cout << "Bulan invalid" << endl;
    }

    cout << "Zodiac: " << zodiac << endl;
  }
  else
  {
    cout << "Input tanggal melebihi tanggal 31" << endl;
  }
  return 0;
}