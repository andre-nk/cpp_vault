#include <iostream>
using namespace std;

int main(){
  int global_n;

  cout << "Masukkan panjang array: " << endl;
  cin >> global_n;

  int arr1[global_n];
  int arr2[global_n];
  int intersect[global_n];

  cout << "Input Array Pertama: (dipisahkan spasi)" << endl;
  for (int i = 0; i < global_n; i++)
  {
    cin >> arr1[i];
  }

  cout << endl;

  cout << "Input Array Kedua: (dipisahkan spasi)" << endl;
  for (int i = 0; i < global_n; i++)
  {
    cin >> arr2[i];
  }

  cout << endl;

  for (int i = 0; i < global_n; i++)
  {
    for (int j = 0; j < global_n; j++)
    {
      if(arr1[i] == arr2[j]){
        intersect[i] = arr1[i];
        cout << arr1[i] << " ";
      }
    }
  }
  

  return 0;
}

