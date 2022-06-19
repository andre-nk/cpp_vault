#include <iostream>
using namespace std;

void ascSelectionSort(int arr[], int length){

  //? The first loop will only need to reach (n-2) because the last child is always the biggest
  for (int i = 0; i < length - 1; i++)
  {
    int minIndex = i; //?assuming that the smallest value's index is i

    //? Second loop for traversing the next items after i until the end (n-1)
    for (int j = i + 1; j < length; j++)
    {
      //? If arr[j] is smaller than arr[i], then index-j must be swapped with index-i (ascending order)
      //? If arr[j] is smaller than arr[i], the loop will keep going, just in case there will be other smaller child
      if (arr[j] < arr[minIndex])
      {
        minIndex = j; //Update the minIndex because index-j is smaller than index-i
      }
    }

    //? Swapping arr[i] which is bigger than arr[minIndex] (arr[j])
    int biggerVal = arr[i];
    arr[i] = arr[minIndex];
    arr[minIndex] = biggerVal;
  }
}

void dscSelectionSort(int arr[], int length){
  for (int i = 0; i < length - 1; i++)
  {
    int maxIndex = i; // Assuming the biggest value's index is i
    for (int j = 0; j < length; j++)
    {
      if(arr[j] > arr[i]){
        maxIndex = j;
      }
    }
    
    //Swapping
    int biggerVal = arr[maxIndex];
    arr[maxIndex] = arr[i];
    arr[i] = biggerVal;
  }
  
}

int main(){
  int sample[] = {2, 4, 7, 3, 1, 5};
  dscSelectionSort(sample, 6);
  for (int i = 0; i < 6; i++)
  {
    cout << sample[i] << " - ";
  }
  
}