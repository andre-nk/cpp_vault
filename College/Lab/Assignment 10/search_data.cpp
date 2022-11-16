#include <iostream>

using namespace std;

int data[] = {7, 21, 45, 66, 98};

int main()
{
  //How many iteration are done until 66 is found?
  int left = 0;
  int right = 4;
  int mid = (left + right) / 2;
  int count = 0;

  while (left <= right)
  {
    if (data[mid] == 66)
    {
      cout << "66 is found at index " << mid << endl;
      break;
    }
    else if (data[mid] < 66)
    {
      left = mid + 1;
    }
    else
    {
      right = mid - 1;
    }
    mid = (left + right) / 2;
    count++;
  }
}