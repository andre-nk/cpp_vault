#include <iostream>
using namespace std;
int main()
{
  int x, N = 5, i, k, total = 0, t = 0, hasil;
  for (i = 1; i <= 5; i++) //1-5
  {
    x = i + i % 5 / 2; // 1 3 4 6 5
    t += x;            // 1 4 8 14 19
  }

  for (k = 1; k < 5; k++) // 1-4
  {
    switch (k)
    {
    case 1:
    {
      hasil = t / 4; //4
      break;
    }
    case 2:
    {
      hasil = t / 2; //9
      break;
    }
    case 3:
    {
      hasil = t * 3 / 4; // 14
      break;
    }
    default:
      hasil = t * 5 + 3; // 98
    }
    total += hasil; //4 13 27 125
  }

  cout << total;
  return 0;
}