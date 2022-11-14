#include <algorithm>
#include <iostream>

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
  
  // STL Sort
  clock_t stlSortStart = clock();
  sort(arr, arr + n);
  double stlSortDuration = (clock() - stlSortStart) / (double)CLOCKS_PER_SEC;

  cout << "Benchmarking array berisi random integer sebanyak " << n << endl;
  cout << "STL sort: " << stlSortDuration << endl;

  return 0;
}