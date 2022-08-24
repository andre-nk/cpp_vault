#include <iostream>
using namespace std;

//Ascending
int merge(int leftArr[], int rightArr[], int mergedArr[], int length){
  int i, j, k = 0;

  while (i < length && j < length)
  {
    if (leftArr[i] <= rightArr[j])
    {
      mergedArr[k] = leftArr[i];
      i++;
    } else {
      mergedArr[k] = rightArr[i];
      j++;
    }

    k++;
  }
  
}

int main()
{
  
}