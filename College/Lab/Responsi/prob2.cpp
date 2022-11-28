#include <iostream>
using namespace std;

int main()
{
  /*

  */

  int n;
  cin >> n;

  if(n > 999){
    return 0;
  }

  // print "f" letter
  for (int i = 0; i < n; i++)
  {
    if (i == 0)
    {
      for (int i = 0; i < n / 2; i++)
      {
        cout << " ";
      }
      for (int i = 0; i < ((n / 2) + 1); i++)
      {
        cout << "*";
      }

      cout << endl;
    }
    else if (i == n / 2)
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
        if (i == n / 2)
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
        if (i == n / 2)
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
  }

  return 0;
}