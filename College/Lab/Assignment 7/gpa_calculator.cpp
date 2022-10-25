#include <iostream>
using namespace std;

double calculate_gpa(int n, double sks[], char score[]);

int main()
{
  int n;
  cout << "Masukkan cacah mata kuliah yang ingin dimasukkan: ";
  cin >> n;

  double sks[n];
  char score[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Masukkan SKS untuk mata kuliah: ";
    cin >> sks[i];
    cout << "Masukkan skor untuk mata kuliah: ";
    cin >> score[i];
  }
  
  cout << "GPA Anda adalah " << calculate_gpa(n, sks, score) << endl;
  return 0;
}

double calculate_gpa(int n, double sks[], char score[])
{
  double credited_score = 0.0;
  int total_sks = 0;

  for (int i = 0; i < n; i++)
  {
    if (score[i] == 'A')
    {
      credited_score += 4.0 * sks[i];
    }
    else if (score[i] == 'B')
    {
      credited_score += 3.0 * sks[i];
    }
    else if (score[i] == 'C')
    {
      credited_score += 2.0 * sks[i];
    }
    else if (score[i] == 'D')
    {
      credited_score += 1.0 * sks[i];
    }
    else if (score[i] == 'E')
    {
      credited_score += 0.0 * sks[i];
    }
  }

  for (int i = 0; i < n; i++)
  {
    total_sks += sks[i];
  }

  return credited_score / total_sks;
}