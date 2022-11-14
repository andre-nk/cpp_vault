#include <iostream>
#include <iomanip>

using namespace std;

void sort(long long int n, long long int x, double s[], double w[])
{
  for (int i = 0; i < n - 1; i++)
  {
    int j = 1;
    while (s[j] < s[j + 1] && j >= 0)
    {
      double temp = s[j];
      s[j] = s[j + 1];
      s[j + 1] = temp;
      temp = w[j];
      w[j] = w[j + 1];
      w[j + 1] = temp;
      j--;
    }
  }
}

int main()
{
  long long int n, x;
  cin >> n >> x;
  double w[n], c[n];

  for (int i = 0; i < n; i++)
  {
    cin >> w[i];
  }

  for (int i = 0; i < n; i++)
  {
    cin >> c[i];
  }

  double s[n];
  for (int i = 0; i < n; i++)
  {
    s[i] = c[i] / w[i];
  }

  sort(n, x, s, w);

  double uang = 0;
  long long int i = 0;
  while (x > 0 && i < n)
  {
    if (x - w[i] >= 0 && i < n)
    {
      uang += s[i] * w[i];
      x -= w[i];
      i++;
    }
    else
    {
      uang += s[i];
      x--;
    }
  }
  
  cout << endl;
  cout << fixed << setprecision(5) << uang << endl;
  return 0;
}