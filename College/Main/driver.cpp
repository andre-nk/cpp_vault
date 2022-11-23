#include <iostream>
using namespace std;

int main()
{
  // linear search
  int arr[5] = {1, 2, 3, 4, 5};
  int key;

  cout << "Enter a number to search: ";
  cin >> key;

  int i;

  //comparison count
  int count = 0;

  for (i = 0; i < 5; i++)
  {
    count++;
    if (arr[i] == key)
    {
      cout << "Found at " << i << endl;
      break;
    }
  }

  if (i == 5)
  {
    cout << "Not found" << endl;
  }

  cout << "Number of comparisons: " << count << endl;
}