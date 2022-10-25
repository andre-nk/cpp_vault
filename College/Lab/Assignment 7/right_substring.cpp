#include <iostream>
#include <string>
using namespace std;

string string_from_right(string st, int n);

int main()
{
  string s;
  int n;

  cout << "Masukkan kata: ";
  getline(cin, s);

  cout << "Masukkan jarak dari kanan kata: ";
  cin >> n;

  cout << string_from_right(s, n) << endl;

  return 0;
}

string string_from_right(string st, int n)
{
  int s_length = st.length();
  char result[n];

  if (s_length < n)
  {
    cout << "Jarak melebihi panjang kata yang dimasukkan. Program tidak bisa dijalankan";
    getchar();
    return 0;
  }

  for (int i = 0; i < n; i++)
  {
    result[i] = st[s_length - n + i];
  }

  string str_result = result;

  return str_result;
}