#include <iostream>
using namespace std;

int division(int n);

int main()
{
  int n;
  cin >> n;
  division(n);

  return 0;
}

int division(int n){
  if(n <= 1){
    cout << "done" << endl;
    return 0;
  }

  cout << n << "/ 3 = " << n / 3 << endl;

  division(n / 3);
}