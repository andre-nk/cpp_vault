#include <iostream>
using namespace std;

int main()
{
  double velocity, distance, time;

  cout << "Program Menghitung Waktu Tempuh" << endl;

  cout << "Masukkan kecepatan objek: (m/s)" << endl;
  cin >> velocity;

  if (velocity < 0)
  {
    cout << "Kecepatan objek tidak dapat kurang dari nol" << endl;
    return 0;
  }

  cout << "Masukkan jarak yang ditempuh objek: (m)" << endl;
  cin >> distance;

  if (distance < 0)
  {
    cout << "Jarak yang ditempuh objek tidak dapat kurang dari nol" << endl;
    return 0;
  }

  time = distance / velocity;
  cout << "Waktu yang ditempuh objek adalah: " << time << " sekon" << endl;

  return 0;
}