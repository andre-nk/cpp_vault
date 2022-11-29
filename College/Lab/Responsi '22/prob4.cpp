#include <iostream>
using namespace std;

//Deklarasi prototipe fungsi multiply dengan parameter integer n
int multiply(int n);

int main()
{
  //Input dan seleksi n
  int n;
  cin >> n;

  if(n <= 0 || n >= 1000){
    cout << "Input n harus lebih dari 0 dan kurang dari 1000" << endl;
    return 0;
  }

  //Pemanggilan fungsi rekursif
  multiply(n);
  return 0;
}

int multiply(int n){
  //Kondisional untuk menghentikan fungsi rekursif
  if(n >= 1000){
    cout << "menyerah" << endl;
    return 0;
  }

  //Output hasil perkalian
  cout << n << " x 2 = " << n * 2 << endl;

  //Pemanggilan fungsi rekursif
  multiply(n * 2);
  return 0;
}