#include <iostream>
using namespace std;

int main()
{
  int data[20] = {10,
                  25,
                  44,
                  50,
                  41,
                  42,
                  49,
                  10,
                  15,
                  38,
                  7,
                  45,
                  12,
                  15,
                  41,
                  48,
                  40,
                  44,
                  22,
                  39};
  
  int left = 0;
  int count = 0;
  int right = 19;
  int mid = (left + right) / 2;

  //3.) Binary Search
  while (left <= right)
  {
    if (data[mid] > 25)
    {
      count++;
      left = mid + 1;
      mid = (left + right) / 2;
    }
    else
    {
      right = mid - 1;
      mid = (left + right) / 2;
    }
  }

  cout << "Jumlah data yang lebih dari 25 adalah " << count << endl;

  return 0;
}
