#include <iostream>
using namespace std;

void merge(int *array, int l, int m, int r)
{
   int i, j, k, nl, nr;
   // size of left and right sub-arrays
   nl = m - l + 1;
   nr = r - m;
   int larr[nl], rarr[nr];
   // fill left and right sub-arrays
   for (i = 0; i < nl; i++)
      larr[i] = array[l + i];
   for (j = 0; j < nr; j++)
      rarr[j] = array[m + 1 + j];
   i = 0;
   j = 0;
   k = l;
   // marge temp arrays to real array
   while (i < nl && j < nr)
   {
      if (larr[i] <= rarr[j])
      {
         array[k] = larr[i];
         i++;
      }
      else
      {
         array[k] = rarr[j];
         j++;
      }
      k++;
   }
   while (i < nl)
   { // extra element in left array
      array[k] = larr[i];
      i++;
      k++;
   }
   while (j < nr)
   { // extra element in right array
      array[k] = rarr[j];
      j++;
      k++;
   }
}
void mergeSort(int *array, int l, int r)
{
   int m;
   if (l < r)
   {
      int m = l + (r - l) / 2;
      // Sort first and second arrays
      mergeSort(array, l, m);
      mergeSort(array, m + 1, r);
      merge(array, l, m, r);
   }
}
int binarySearch(int array[], int x, int low, int high)
{
   if (high >= low)
   {
      int mid = low + (high - low) / 2;

      // If found at mid, then return it
      if (array[mid] == x)
         return mid;

      // Search the left half
      if (array[mid] > x)
         return binarySearch(array, x, low, mid - 1);

      // Search the right half
      return binarySearch(array, x, mid + 1, high);
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

   mergeSort(akhir, 0, N - 1); //(n-1) for last index

   int result = binarySearch(akhir, x, 0, N - 1) + 1;
   // if(result<0) cout<<0;
   // else cout<<result;
   cout << result;
}
