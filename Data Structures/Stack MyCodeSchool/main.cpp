#include <iostream>
using namespace std;

class Stack
{
public:
  int maxSize;

  //? Dynamic array that will adjust its size to the maxSize value;
  int *array = new int[maxSize];
  int top = -1;

  //? Constructor for the Stack and therefore the maxSize value
  Stack(int _maxSize)
  {
    maxSize = _maxSize;
  };

  //? Push with dynamic array solution
  void push(int value)
  {
    cout << "Top is " << top << endl;
    cout << "Max Size is " << maxSize - 1 << endl;

    if (top == maxSize - 1)
    {
      cout << "Error! Stack overflow" << endl;
      cout << "Max size is " << maxSize << endl;
      cout << "Expanding array..." << endl;

      int *tempArray = new int[maxSize * 2];
      for (int i = 0; i < maxSize; i++)
      {
        tempArray[i] = array[i];
      }

      array = tempArray;
      maxSize = maxSize * 2;

      top++;
      array[top] = value;
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
    for (int i = 0; i < maxSize; i++)
    {
      cout << array[i] << " - ";
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
  Stack stack = Stack(4);

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

  delete stack.array;
  return 0;
}