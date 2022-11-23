#include <iostream>
using namespace std;

void binarySearch(int nums[], int size)
{
  int first = 0;       // first array elements
  int last = size - 1; // last array
  int middle;          // midpoint of search
  int position = -1;   // position of search value
  bool found = false;  // flag

  for (int j = 1; j < 4; j++)
  {
    int comp = 0;
    int randVal = 65; // rand value to be searched

    while (!found && first <= last)
    {
      comp++;
      middle = (first + last) / 2; // calculate midpoint
      if (nums[middle] == randVal) // if value is at mid
      {
        found = true;
        position = middle;
      }
      else if (nums[middle] > randVal) // if value is in lower half
      {
        last = middle - 1;
      }
      else
      {
        first = middle + 1;
      } // if value is in upper ha;f
    }
    cout << "|Run " << j << ": " << endl;
    cout << " -Search: " << randVal << "\n";     // cout searched value
    cout << " -Comparisons: " << comp << "\n\n"; // cout # of comparisons that were made
  }
}

int main()
{
  //random 20 numbers
  int nums[15] = { 1, 6, 25, 28, 35, 42, 46, 59, 62, 63, 65, 68, 70, 79, 82};

  binarySearch(nums, 20); // call binarySearch function
}