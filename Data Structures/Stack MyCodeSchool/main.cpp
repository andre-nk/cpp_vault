#include <iostream>
using namespace std;

class Stack
{
private:
  int array[10];
  int top = -1;

public:
  void push(int value)
  {
    if(top == 10 - 1){
      cout << "Error! Stack overflow" << endl;
      return;
    }

    top++;
    array[top] = value;
  }

  void pop()
  {
    array[top] = -1;
    top--;
  }

  void print()
  {
    for (int i = 10 - 1; i > -1; i--)
    {
      cout << i << ".) " << array[i] << endl;
    }
  }

  int getTop()
  {
    return array[top];
  }

  bool isEmpty()
  {
    return top == -1;
  }
};

int main()
{
  Stack stack = Stack();

  int insertValue, targetIndex, answer;
  bool continueProgram = true;

  while (continueProgram == true)
  {
    cout << endl;
    cout << endl;
    cout << "Stack Program" << endl;
    cout << "What do you want to do? " << endl;
    cout << "1.) Push" << endl;
    cout << "2.) Pop" << endl;
    cout << "3.) Print" << endl;
    cout << "4.) Top" << endl;
    cout << "5.) isEmpty" << endl;
    cout << "6.) Exit program" << endl;
    cin >> answer;

    if (answer == 1)
    {
      cout << "What number to be pushed?: " << endl;
      cin >> insertValue;

      stack.push(insertValue);
      stack.print();
    }
    else if (answer == 2)
    {
      cout << "Popping the upmost top item in the stack..." << endl;

      stack.pop();
      stack.print();
    }
    else if (answer == 3)
    {
      cout << "Printing..." << endl;
      stack.print();
    }
    else if (answer == 4)
    {
      cout << "Printing the upmost top item in the stack..." << endl;
      cout << stack.getTop() << endl;
    }
    else if (answer == 5)
    {
      cout << "Is the stack empty?";
      cout << stack.isEmpty() << endl;
    }
    else
    {
      cout << "Exiting program..." << endl;
      continueProgram = false;
      break;
    }
  }

  return 0;
}