#include <iostream>
using namespace std;

struct mahasiswa{
  string student_id;
  double midterm_score;
  double finalexam_score;
};

int main(){
  int n;

  cout << "Berapa banyak data mahasiswa yang ingin dimasukkan: ";
  cin >> n;

  mahasiswa records[n];
  if(n > 50){
    cout << "Maaf, masukkan data mahasiswa tidak bisa lebih dari 50";
    getchar();
    return 0;
  }

  cout << "Masukan Data Mahasiswa" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << "Masukkan ID Mahasiswa: ";
    cin >> records[i].student_id;
    cout << "Masukkan Nilai Ujian Tengah Semester: ";
    cin >> records[i].midterm_score;
    cout << "Masukkan Nilai Ujian Akhir: ";
    cin >> records[i].finalexam_score; 
  }
  
  cout << "Hasil";
  for (int i = 0; i < n; i++)
  {
    cout << "ID Mahasiswa: " << records[i].student_id << endl;
    cout << "Rata-rata: " << (records[i].midterm_score + records[i].finalexam_score) / 2 << endl;
  }
};