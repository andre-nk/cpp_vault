#include <iostream>
#include <iomanip>
using namespace std;

struct Book
{
  string isbn;
  string title;
  int price;
};

void selectionSort(Book arr[], int n);
int binarySearch(Book arr[], int n, string isbn);

int main()
{
  Book books[] = {
      {
          "1102345",
          "Programming",
          120000,
      },
      {
          "1102349",
          "Database",
          80000,
      },
      {
          "1102346",
          "Microprocessor",
          85000,
      },
      {
          "1102360",
          "Calculus",
          100000,
      },
      {
          "1102352",
          "Cryptography",
          75000,
      },
      {
          "1102358",
          "Algorithm",
          60000,
      },
      {
          "1102341",
          "Expert System",
          95000,

      },
  };

  // print
  cout << "Unsorted:" << endl;
  for (int i = 0; i < 7; i++)
  {
    cout << books[i].isbn << " " << books[i].title << " " << books[i].price << endl;
  }

  selectionSort(books, 7);
  cout << "Sorted:" << endl;
  for (int i = 0; i < 7; i++)
  {
    cout << books[i].isbn << " " << books[i].title << " " << books[i].price << endl;
  }

  string query;
  cin >> query;

  int index = binarySearch(books, 7, query);
  if (index == -1)
  {
    cout << "Data not found" << endl;
  }
  else
  {
    books[index].title = "Deep Learning";
    books[index].price = 99000;
    
    cout << "The data is found and changed." << endl;
  }

  for (int i = 0; i < 7; i++)
  {
    cout << books[i].isbn << " " << books[i].title << " " << books[i].price << endl;
  }

  return 0;
}

void selectionSort(Book arr[], int n)
{
  int i, j, min_idx;

  // One by one move boundary of unsorted subarray
  for (i = 0; i < n - 1; i++)
  {
    // Find the minimum element in unsorted array
    min_idx = i;
    for (j = i + 1; j < n; j++)
      if (arr[j].isbn < arr[min_idx].isbn)
        min_idx = j;

    // Swap the found minimum element with the first element
    swap(arr[min_idx], arr[i]);
  }
}

int binarySearch(Book arr[], int n, string isbn)
{
  int l = 0, r = n - 1;
  while (l <= r)
  {
    int m = l + (r - l) / 2;

    // Check if x is present at mid
    if (arr[m].isbn == isbn)
      return m;

    // If x greater, ignore left half
    if (arr[m].isbn < isbn)
      l = m + 1;

    // If x is smaller, ignore right half
    else
      r = m - 1;
  }

  // if we reach here, then element was
  // not present
  return -1;
}