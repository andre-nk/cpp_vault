#include <iostream>
using namespace std;

int main(){
  double velocity, distance, time;

  cout << "Program Menghitung Waktu Tempuh" << endl;

  cout << "Masukkan kecepatan objek: (m/s)" << endl;
  cin >> velocity;

  cout << "Masukkan jarak yang ditempuh objek: (m)" << endl;
  cin >> distance;

  time = distance / velocity;
  cout << "Waktu yang ditempuh objek adalah: " << time << " sekon" << endl;

  return 0;
}