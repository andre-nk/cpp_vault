#include <iostream>
#include <string.h>
using namespace std;

struct stKubus {
  int sisi;
  double luas;
} kubusA;

int main(){
  stKubus kubusB;
  int pjSisi = 8;
  kubusA.sisi = pjSisi;
  kubusA.luas = pjSisi * pjSisi;
  kubusB = kubusA;

  cout << "Luas kubus B: " << kubusB.luas;
  return 0;
}