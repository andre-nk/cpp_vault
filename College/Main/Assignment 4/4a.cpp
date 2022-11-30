#include<iostream>
using namespace std;

struct Mahasiswa{
  string nama;
  int total_sks;
  int total_nilai; 
  double ipk;
};

int main(){
  int n;
  cin >> n;

  if(n <= 0 || n > 1000){
    cout << "Input jumlah mahasiswa tidak valid" << endl;
    return 0;
  }

  Mahasiswa dataMhs[n];

  for(int i = 0; i < n; i++){
    cin >> dataMhs[i].nama >> dataMhs[i].total_nilai >> dataMhs[i].total_sks;

    if(dataMhs[i].total_sks < 0 || dataMhs[i].total_sks > 200){
      cout << "Input jumlah SKS tidak valid" << endl;
      return 0;
    }

    if(dataMhs[i].total_nilai < 0 || dataMhs[i].total_nilai > (4 * dataMhs[i].total_sks)){
      cout << "Input jumlah nilai tidak valid" << endl;
      return 0;
    }
    
    dataMhs[i].ipk = (double)dataMhs[i].total_nilai / (double)dataMhs[i].total_sks;
  }

  //sort alphabetically descending
  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
      if(dataMhs[i].ipk == dataMhs[j].ipk){
        if(dataMhs[i].nama > dataMhs[j].nama){
          Mahasiswa temp = dataMhs[i];
          dataMhs[i] = dataMhs[j];
          dataMhs[j] = temp;
        }
      }
    }
  }

  for(int i = 0; i < n; i++){
    cout << dataMhs[i].nama << endl;
  }

  return 0;
}