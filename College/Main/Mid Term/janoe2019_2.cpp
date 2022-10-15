#include <iostream>
using namespace std;

int main(){
  int amount;
  int total = 0;
  int sheets[9];

  cin >> amount;
  
  //100k
  sheets[0] = amount / 100000;
  amount = amount % 100000;
  cout << sheets[0] << " lembar 100.000an" << endl;

  //50k
  sheets[1] = amount / 50000;
  amount = amount % 50000;
  cout << sheets[1] << " lembar 50.000an" << endl;

  //10k
  sheets[2] = amount / 10000;
  amount = amount % 10000;
  cout << sheets[2] << " lembar 10.000an" << endl;

  //5k
  sheets[3] = amount / 5000;
  amount = amount % 5000;
  cout << sheets[3] << " lembar 5.000an" << endl;

  //1k
  sheets[4] = amount / 1000;
  amount = amount % 1000;
  cout << sheets[4] << " lembar 1.000an" << endl;

  //0.5k
  sheets[5] = amount / 500;
  amount = amount % 500;
  cout << sheets[5] << " lembar 500an" << endl;

  //0.01k
  sheets[6] = amount / 10;
  amount = amount % 10;
  cout << sheets[6] << " lembar 10an" << endl;

  //0.01k
  sheets[7] = amount / 5;
  amount = amount % 5;
  cout << sheets[7] << " lembar 5an" << endl;

  //0.001k
  sheets[8] = amount / 1;
  amount = amount % 1;
  cout << sheets[8] << " lembar 1an" << endl;

  for (int i = 0; i < 9; i++)
  {
    total += sheets[i];
  }

  cout << total << " lembar";

  return 0;
}