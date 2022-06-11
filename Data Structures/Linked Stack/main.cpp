#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

class LinkedStack
{
public:
  Node *head = NULL;

  void push(int value)
  {
    Node *temp = new Node();
    temp->data = value;
    temp->next = head;

    head = temp;
    return;
  }

  void pop()
  {
    if (head != NULL)
    {
      Node *oldHead = head;
      head = head->next;

      free(oldHead);
    }
    return;
  }

  void print()
  {
    Node *temp = head;
    while (temp != NULL)
    {
      cout << temp->data << " -";
      temp = temp->next;
    }
  }

  int getTop()
  {
    return head->data;
  }

  bool isEmpty()
  {
    if (head == NULL)
    {
      return true;
    }

    return false;
  }
};

int main()
{
  LinkedStack stack = LinkedStack();

  int insertValue, targetIndex, answer;
  bool continueProgram = true;

  while (continueProgram == true)
  {
    cout << endl;
    cout << endl;
    cout << "Linked Stack Program" << endl;
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