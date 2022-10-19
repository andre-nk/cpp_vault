#include <iostream>

using namespace std;

struct Union
{
  int id;
};

struct Employee
{
  Union aflcio;
  long emp_id;
  float rate;
};

int main()
{
  Employee joe;
  joe.aflcio.id = 35;
}