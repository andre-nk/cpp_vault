#include <iostream>
#include <cstdio>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
  // Generate random int array
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    arr[i] = rand() % 100;
  }

  // Ascending insertion sort
  clock_t ascInsertionStart = clock();
  int temp;
  for (int i = 1; i < n; i++)
  {
    temp = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > temp)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = temp;
  }
  double ascInsertionDuration = (clock() - ascInsertionStart) / (double)CLOCKS_PER_SEC;

  // Descending insertion sort
  clock_t descInsertionStart = clock();
  for (int i = 1; i < n; i++)
  {
    temp = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] < temp)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = temp;
  }
  double descInsertionDuration = (clock() - descInsertionStart) / (double)CLOCKS_PER_SEC;

  // Ascending selection sort
  clock_t ascSelectionStart = clock();
  for (int i = 0; i < n - 1; i++)
  {
    int min = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[min])
      {
        min = j;
      }
    }
    temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
  }
  double ascSelectionDuration = (clock() - ascSelectionStart) / (double)CLOCKS_PER_SEC;

  // Descending selection sort
  clock_t descSelectionStart = clock();
  for (int i = 0; i < n - 1; i++)
  {
    int max = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] > arr[max])
      {
        max = j;
      }
    }
    temp = arr[i];
    arr[i] = arr[max];
    arr[max] = temp;
  }
  double descSelectionDuration = (clock() - descSelectionStart) / (double)CLOCKS_PER_SEC;

  cout << "Benchmarking untuk " << n << " elemen" << endl;
  cout << right << setw(4) << "Insertion Sort Runtime (ascending): " << ascInsertionDuration << endl;
  cout << right << setw(4) << "Insertion Sort Runtime (descending): " << descInsertionDuration << endl;
  cout << right << setw(4) << "Selection Sort Runtime (ascending): " << ascSelectionDuration << endl;
  cout << right << setw(4) << "Selection Sort Runtime (descending): " << descSelectionDuration << endl;

  return 0;
}
