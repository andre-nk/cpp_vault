#include <iostream>
using namespace std;

int main()
{
  int n; //untuk suku ke-n
  int a = 1; //suku n=1
  int b = 2; //interval tingkat 1 (beda) = 2
  int c = 1; //interval tingkat 2 = 1
  long nth;

  cout << "Masukkan n: " << endl;
  cin >> n;

  nth = a + ((n - 1) * b) + (0.5 * (n - 1) * (n - 2) * 1);
  cout << nth << endl;
  
  return 0;
}