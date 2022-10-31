#include <iostream>
using namespace std;

void px(string st)
{
  cout << st << endl;
  if (st.size() > 0)
  {
    px(st.substr(1, st.size()));
      
    cout << st[0] << " ";
    px(st.substr(0, st.size() - 1));
  }
}

//What's the function of px()?
int main()
{
  px("PQRS");
  return 0;
}