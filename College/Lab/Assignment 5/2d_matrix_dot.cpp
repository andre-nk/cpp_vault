#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int matrixA[4];
  int matrixB[4];
  int matrixC[4];

  cout << "Enter elements for matrix A:" << endl;
  for (int i = 1; i <= 4; i++)
  {
    cout << "Enter element A1" << i << ": ";
    cin >> matrixA[i - 1];
  }

  cout << endl;

  cout << "Enter elements for matrix B:" << endl;
  for (int i = 1; i <= 4; i++)
  {
    cout << "Enter element B1" << i << ": ";
    cin >> matrixB[i - 1];
  }

  cout << "Matrix A:" << endl;
  cout << right << setw(4) << matrixA[0] << setw(4) << matrixA[1] << endl;
  cout << right << setw(4) << matrixA[2] << setw(4) << matrixA[3] << endl;

  cout << endl;

  cout << "Matrix B:" << endl;
  cout << right << setw(4) << matrixB[0] << setw(4) << matrixB[1] << endl;
  cout << right << setw(4) << matrixB[2] << setw(4) << matrixB[3] << endl;

  matrixC[0] = (matrixA[0] * matrixB[0]) + (matrixA[1] * matrixB[2]);
  matrixC[1] = (matrixA[0] * matrixB[1]) + (matrixA[1] * matrixB[3]);
  matrixC[2] = (matrixA[2] * matrixB[0]) + (matrixA[3] * matrixB[2]);
  matrixC[3] = (matrixA[2] * matrixB[1]) + (matrixA[3] * matrixB[3]);

  cout << endl;

  cout << "Matrix C:" << endl;
  cout << right << setw(4) << matrixC[0] << setw(4) << matrixC[1] << endl;
  cout << right << setw(4) << matrixC[2] << setw(4) << matrixC[3] << endl;

  return 0;
}