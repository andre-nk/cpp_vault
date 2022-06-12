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

  int pop()
  {
    int poppedValue = array[top];
    array[top] = 0;
    top--;

    return poppedValue;
  }

  void print()
  {
    for (int i = 0; i < maxSize; i++)
    {
      cout << array[i] << " - ";
    }
  }

  void reverse()
  {
    int *tempArray = new int[maxSize];
    for (int i = 0; i < maxSize; i++)
    {
      tempArray[i] = array[maxSize - i];
    }

    array = tempArray;
    return;
  }

  int getTop()
  {
    return array[top];
  }

  bool isEmpty()
  {
    if (top == -1)
    {
      return true;
    }

    return false;
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
    cout << "6.) Reverse" << endl;
    cout << "7.) Exit program" << endl;
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

      cout << "Popped: " << stack.pop() << endl;
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
    else if (answer == 6)
    {
      cout << "Reversing stack...";
      stack.reverse();
      stack.print();
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