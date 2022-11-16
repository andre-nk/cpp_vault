#include <iostream>
using namespace std;

struct mahasiswa
{
  string id;
  string fullName;
  int score;
};

int main()
{
  mahasiswa mhs[12] = {
      {"408599", "Cecilio Schubart", 93},
      {"403189", "Desiri Chalker", 90},
      {"405462", "Falkner Carder", 75},
      {"406703", "Delainey Ruckhard", 89},
      {"400324", "Colette Abramovic", 92},
      {"404342", "Irwinn Bussey", 81},
      {"409504", "Terrie Whitaker", 83},
      {"401339", "Gary Binestead", 77},
      {"405509", "Ferris Fulbrook", 91},
      {"400522", "Diane Bissill", 77},
      {"404878", "Ricoriki Jiroutka", 93},
      {"403536", "Reidar Putten", 89},
  };

  // sort mahasiswa by id ascendingly
  for (int i = 0; i < 12; i++)
  {
    for (int j = i + 1; j < 12; j++)
    {
      if (mhs[i].id > mhs[j].id)
      {
        mahasiswa temp = mhs[i];
        mhs[i] = mhs[j];
        mhs[j] = temp;
      }
    }
  }

  // binary search mahasiswa by inputted id
  string inputId;
  cout << "Masukkan ID mahasiswa: ";
  cin >> inputId;

  int left = 0;
  int right = 11;
  int mid = (left + right) / 2;

  while (left <= right)
  {
    if (mhs[mid].id == inputId)
    {
      // print mahasiswa
      cout << "Data mahasiswa yang dicari: (ID: " << inputId << ")" << endl;
      cout << "Nama: " << mhs[mid].fullName << endl;
      cout << "Nilai: " << mhs[mid].score << endl;
      break;
    }
    else if (mhs[mid].id < inputId)
    {
      left = mid + 1;
    }
    else
    {
      right = mid - 1;
    }
    mid = (left + right) / 2;
  }

  // print found mahasiswa
  if (left > right)
  {
    cout << "Data not found" << endl;
  }

  return 0;
}