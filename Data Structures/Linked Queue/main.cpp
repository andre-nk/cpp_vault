#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

class LinkedQueue
{
private:
  Node *head;
  int arr[4];

public:
  LinkedQueue()
  {
    head = NULL;
  }

  // insert newItem from the back (tail)
  void enqueue(int newItem)
  {
    Node *temp = new Node();
    temp->data = newItem;
    temp->next = head;

    head = temp;
    return;
  }

  // remove item from the head
  void dequeue()
  {
    if(isEmpty()){
      cout << "The queue is empty. Nothing to dequeue!" << endl;
      return;
    }

    Node *current = head;
    head = current->next;

    current->next = NULL;
    free(current);
    return;
  }

  bool isEmpty()
  {
    return head == NULL;
  }

  void print()
  {
    Node *temp = head;
    while (temp != NULL)
    {

      cout << temp->data << " - ";
      temp = temp->next;
    }

    cout << endl;
    return;
  }
};

int main(int argc, const char *argv[])
{
  LinkedQueue queueInstance = LinkedQueue();
  int option, value;

  do
  {
    cout << "Linked Queue" << endl;
    cout << "1. Enqueue" << endl;
    cout << "2. Dequeue" << endl;
    cout << "3. isEmpty()" << endl;
    cout << "4. print()" << endl;
    cout << "9. Clear Screen" << endl;

    cin >> option;

    cout << endl;
    switch (option)
    {
    case 1:
      cout << "Input the newItem to be enqueued into the Linked Queue: " << endl;
      cin >> value;

      queueInstance.enqueue(value);
      queueInstance.print();
      break;

    case 2:
      queueInstance.dequeue();
      queueInstance.print();

      break;

    case 3:
      if (queueInstance.isEmpty())
      {
        cout << "The queue is empty" << endl;
      }
      else
      {
        cout << "The queue is not empty" << endl;
      }
      break;

    case 4:
      queueInstance.print();
      break;

    case 9:
      system("cls");
      break;

    default:
      cout << "Please enter a valid option number" << endl;
      break;
    }

  } while (option != 0);

  return 0;
}
