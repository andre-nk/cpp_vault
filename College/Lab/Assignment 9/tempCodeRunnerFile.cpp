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

  clock_t descBubbleStart = clock();

  // Descending bubble sort
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] < arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  double descBubbleDur = (clock() - descBubbleStart) / (double)CLOCKS_PER_SEC;

  cout << right << setw(4) << "Bubble Sort Runtime (ascending): " << descBubbleDur << endl;
  return 0;
}
