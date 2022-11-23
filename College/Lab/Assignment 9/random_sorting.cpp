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

  clock_t ascMergeStart = clock();

  // Descending merge sort
  int temp[n];
  for (int i = 0; i < n; i++)
  {
    temp[i] = arr[i];
  }
  int i = 0;
  int j = n / 2;
  int k = 0;

  while (i < n / 2 && j < n)
  {
    if (temp[i] > temp[j])
    {
      arr[k] = temp[i];
      i++;
    }
    else
    {
      arr[k] = temp[j];
      j++;
    }
    k++;
  }

  double ascMergeDur = (clock() - ascMergeStart) / (double)CLOCKS_PER_SEC;

  cout << right << setw(4) << "Merge Sort Runtime (descending): " << ascMergeDur << endl;
  return 0;
}
