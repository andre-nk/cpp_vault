#include <iostream>
using namespace std;

int main()
{
  int step;
  int limit;

  cout << "Masukkan dua bilangan (batasan, interval):" << endl;
  cin >> limit >> step;

  for (int i = 1; i <= limit ; i++)
  {
    if(i % step == 0){
      cout << "*  "; 
    } else {
      cout << i << "  ";
    }
  }
  
  return 0;
}