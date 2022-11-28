#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int below_height = 0;
  int below_weight = 0;
  double total_height = 0;
  double total_weight = 0;
  double arr_height[n];
  double arr_weight[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr_weight[i] >> arr_height[i];
    total_height += arr_height[i];
    total_weight += arr_weight[i];
  }

  cout << (total_weight / n) << " " << (total_height / n) << endl;

  for (int i = 0; i < n; i++)
  {
    if(arr_weight[i] < (total_weight / n)){
      below_weight++;
    }
    
    if(arr_height[i] < (total_height / n)){
      below_height++;
    }
  }
  
  cout << "Below weight: " << below_weight << endl;
  cout << "Below height: " << below_height << endl; 

  return 0;
}