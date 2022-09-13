#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double a, b, c;
  double x, y;

  cout << "Program Determinan" << endl;
  cin >> a >> b >> c;

  double det = (pow(b, 2)) - (4 * a * c);

  if (det > 0)
  {
    x = (-b + sqrt(det)) / 2 * a;
    y = (-b - sqrt(det)) / 2 * a;
  }
  else if (det == 0)
  {
    x = y = -b / 2 * a;
  }
  else if (det < 0)
  {
    x = -b / 2 * a + (sqrt(-det) / 2 * a);
    y = -b / 2 * a - (sqrt(-det) / 2 * a);
  }

  cout << "Akar-akar dari persamaan:" << endl;
  cout << "X: " << x << endl;
  cout << "Y: " << y << endl;

  return 0;
}