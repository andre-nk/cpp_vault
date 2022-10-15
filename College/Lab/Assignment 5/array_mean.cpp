#include<iostream>
using namespace std;

int main(){
  int n;
  double sum = 0;

  cout << "How many integers? ";
  cin >> n;

  int arr[n];

  cout << "Write the integers separated by a space: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    sum += arr[i];
  }

  cout << "The average is: " << sum / n << endl;

  return 0;
}