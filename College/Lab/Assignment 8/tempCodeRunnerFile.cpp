#include <iostream>
using namespace std;

bool palindrome_rec(string s, int i = 0)
{
  if (i == s.length() / 2)
  {
    return true;
  }
  else if (s[i] == s[s.length() - 1 - i])
  {
    return palindrome_rec(s, i + 1);
  }
  else
  {
    return false;
  }
}

int main()
{
  string s;
  cin >> s;

  if(palindrome_rec(s) == 1){
    cout << "Palindrome" << endl;
  } else {
    cout << "Not a palindrome" << endl;
  }
  return 0;
}
