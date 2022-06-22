#include <iostream>
using namespace std;

int bubbleSort(int arr[])
{
  int i, j, temp, pass = 0;
  for (i = 0; i < 10; i++)
  {
    for (j = i + 1; j < 10; j++)
    {
      if (arr[j] < arr[i])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
    pass++;
  }

  return pass;
}

int main()
{
  int a[10] = {10, 2, 0, 14, 43, 25, 18, 1, 5, 45};
  int bubbleSortPass = bubbleSort(a);

  for (int i = 0; i < 10; i++)
  {
    cout << a[i] << "\t";
  }
  cout << "\nNumber of passes taken to sort the list:" << bubbleSortPass << endl;
  return 0;
}