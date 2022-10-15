#include <iostream>
using namespace std;

int main(){
  int acc = 0;
  int visitors[8];
  int visitors_per_hour[8];
  
  for (int i = 0; i < 8; i++)
  {
    cin >> visitors[i];
    if(i != 0){
      visitors_per_hour[i] = visitors[i] - visitors[i -1];
    } else {
      visitors_per_hour[0] = visitors[0];
    }

    cout << visitors_per_hour[i] << " ";
  }

  return 0;
}