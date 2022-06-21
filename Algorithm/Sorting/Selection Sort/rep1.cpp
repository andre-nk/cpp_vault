#include <iostream>
using namespace std;

void selectionSort(int arr[], int length){
  for (int i = 0; i < length - 1; i++)
  {
    int minIndex = i;
    for (int j = i + 1; j < length; j++)
    {
      if(arr[j] < arr[minIndex]){
        minIndex = j;
      }
    }

    int temp = arr[i];
    arr[i] = arr[minIndex];
    arr[minIndex] = temp;
  }
}

int main(){
  int sample[] = {7, 2, 5, 8, 9, 3};
  selectionSort(sample, 6);

  for (int i = 0; i < 6; i++)
  {
    cout << sample[i] << " - " ;
  }
  
}