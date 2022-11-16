#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
  srand(time(NULL));
  int n;

  cout << "Insert a number: ";
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    arr[i] = rand() % 100 + 1;
  }

  cout << "Data before sorted: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  cout << " " << endl;

  clock_t begin = clock();
  sort(arr, arr + n);
  clock_t end = clock();

  double elapsed_time = double(end - begin) / CLOCKS_PER_SEC;

  cout << "Data after sorted: ";

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  cout << "Elapsed time: " << elapsed_time << " s" << endl;

  return 0;
}