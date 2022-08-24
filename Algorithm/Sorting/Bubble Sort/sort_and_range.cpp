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

void shortestRange(int arr[])
{
  int shortestRange = arr[1] - arr[0];
  for (int i = 0; i < 10; i++)
  {
    if (i == 8)
    {
      break;
    }
    else
    {
      int newRange = arr[i + 2] - arr[i++];
      if (newRange <= shortestRange)
      {
        shortestRange = newRange;
      }
    }
  }

  cout << "Shortest Range is " << shortestRange << endl;
}

void widestRange(int arr[])
{
  int widestRange = arr[1] - arr[0];
  for (int i = 0; i < 10; i++)
  {
    if (i == 8)
    {
      break;
    }
    else
    {
      int newRange = arr[i + 2] - arr[i++];
      if (newRange >= widestRange)
      {
        widestRange = newRange;
      }
    }
  }

  cout << "List's widest range is " << widestRange << endl;
}

int main()
{
  int a[10] = {20, 78, 12, 1983, 88, 5, 800, 1910, 105, 66};
  int bubbleSortPass = bubbleSort(a);

  cout << "Sorted List:" << endl;

  for (int i = 0; i < 10; i++)
  {
    cout << a[i] << "\t";
  }

  shortestRange(a);
  widestRange(a);
  return 0;
}