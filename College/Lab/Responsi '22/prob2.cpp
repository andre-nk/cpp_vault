#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  if (n < 5 || n > 999)
  {
    cout << "Input tinggi alfabet e harus melebihi 5 dan kurang dari 999" << endl;
    return 0;
  }

  for (int i = 0; i < n; i++)
  {
    if (i == 0 || i == n / 2 || i == (n - 1))
    {
      for (int i = 0; i < n; i++)
      {
        cout << "*";
      }
      cout << endl;
    }
    else if (i < n / 2)
    {
      for (int i = 0; i < n; i++)
      {
        if (i == 0 || i == (n - 1))
        {
          cout << "*";
        }
        else
        {
          cout << " ";
        }
      }
      cout << endl;
    }
    else
    {
      for (int i = 0; i < n; i++)
      {
        if (i == 0)
        {
          cout << "*" << endl;
        }
      }
    }
  }

  return 0;
}