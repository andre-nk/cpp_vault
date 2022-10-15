#include <iostream>
using namespace std;

int main(){
  int A[8];

  for(int i=0; i<8; i++){
    cin >> A[i];

  }
  cout << A[0] << " ";

  for(int j=0; j<7; j++){
    A[j]=A[j+1]-A[j];
    cout << A[j] << " ";
  }


  return 0;
}