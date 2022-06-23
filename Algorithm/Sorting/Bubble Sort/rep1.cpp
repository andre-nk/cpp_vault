#include <iostream>
using namespace std;

void bubbleSort(int arr[], int length){
  for (int i = 0; i < length - 1; i++)
  {
    int passes = 0;

    for (int j = i + 1; j < length; j++)
    {
      if(arr[j] < arr[i]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        passes++;
      }
    }
  }
}

int main() {
  int arr[] = {0, 8, 2, 7, 5, 3};
  bubbleSort(arr, 6);
  for (int i = 0; i < 6; i++)
  {
    cout << arr[i] << " - ";
  }
}