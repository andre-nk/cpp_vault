#include <iostream>
using namespace std;

int main()
{
  //median of nth array
  int n;
  cout << "Enter the number of elements in the array: ";
  cin >> n;
  int arr[n];
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int temp;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] > arr[j])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  if (n % 2 == 0)
  {
    cout << "The median of the array is " << (arr[n / 2] + arr[(n / 2) - 1]) / 2 << endl;
  }
  else
  {
    cout << "The median of the array is " << arr[n / 2] << endl;
  }
  return 0;
}