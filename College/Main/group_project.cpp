#include <iostream>
using namespace std;

void merge(int *array, int l, int m, int r)
{
   int i, j, k, nl, nr;

   nl = m - l + 1;
   nr = r - m;
   int larr[nl], rarr[nr];

   for (i = 0; i < nl; i++)
      larr[i] = array[l + i]; // fill left array
   for (j = 0; j < nr; j++)
      rarr[j] = array[m + 1 + j]; // fill right array
   i = 0;
   j = 0;
   k = l;

   // marge temp arrays to real array
   while (i < nl && j < nr) // while both arrays have elements
   {
      if (larr[i] <= rarr[j])
      {
         array[k] = larr[i]; // add smaller element from left array
         i++;                // move to next element in left array
      }
      else
      {
         array[k] = rarr[j]; // add smaller element from right array
         j++;                // move to next element in right array
      }
      k++; // move to next index in array
   }

   while (i < nl) // extra element in left array
   {
      array[k] = larr[i]; // add element to array
      i++;                // move to next index in left array
      k++;                // move to next index in array
   }

   while (j < nr)
   {
      array[k] = rarr[j]; // add element to array
      j++;                // move to next index in right array
      k++;                // move to next index in array
   }
}

void mergeSort(int *array, int l, int r)
{
   int m;
   if (l < r)
   {
      // 0, 8 / 2 = 4
      int m = l + (r - l) / 2;
      // Sort first and second arrays
      mergeSort(array, l, m);     // left array
      mergeSort(array, m + 1, r); // right array
      merge(array, l, m, r);      // merge sorted arrays
   }
}

int binarySearch(int array[], int x, int low, int high)
{
   if (high >= low)
   {
      int mid = low + (high - low) / 2; // find middle element

      // If found at mid, then return it
      if (array[mid] == x)
         return mid;

      // Search the left half
      if (array[mid] > x)
         return binarySearch(array, x, low, mid - 1); // search left array

      // Search the right half
      return binarySearch(array, x, mid + 1, high); // search right array
   }
}

int main()
{
   int N;
   cin >> N;
   int gambar[N], warna[N], akhir[N], x;
   string siswa[N];

   for (int i = 0; i < N; i++)
   {
      cin >> siswa[i] >> gambar[i] >> warna[i];
   }

   for (int i = 0; i < N; i++)
   {
      akhir[i] = gambar[i] + warna[i];
   }

   cin >> x;

   mergeSort(akhir, 0, N - 1);

   int result = binarySearch(akhir, x, 0, N - 1) + 1; //+1 because array start from 0

   cout << result;
}
