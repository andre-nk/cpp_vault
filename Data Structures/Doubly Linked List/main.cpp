#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
  Node *prev;
};

class DoublydoublyLinkedList
{
private:
  Node *head = NULL;

public:
  void insertFirst(int data)
  {
    Node *temp = new Node();

    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;

    if (head == NULL)
    {
      head = temp;
      return;
    }

    head->prev = temp;
    temp->next = head;
    head = temp;
  }

  void insertAt(int data, int index)
  {
    Node *temp = new Node();

    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;

    if (head == NULL)
    {
      head = temp;
      return;
    }

    Node *prevNode = head;
    for (int i = 0; i < index - 1; i++)
    {
      prevNode = prevNode->next;
    }

    Node *nextNode = prevNode->next;
    temp->next = nextNode;
    temp->prev = prevNode;

    prevNode->next = temp;
    nextNode->prev = temp;
  }

  void deleteAt(int index){
    Node *prevNode = head;
    for (int i = 0; i < index - 1; i++)
    {
      prevNode = prevNode->next;
    }

    Node *currentNode = prevNode->next;
    Node *nextNode = currentNode->next;
    
    prevNode->next = nextNode;
    nextNode->prev = currentNode;

    free(currentNode);
  }

  void print()
  {
    Node *temp = head;
    while (temp != NULL)
    {
      cout << temp->data << " - ";
      temp = temp->next;
    }
  }

  void printReverse()
  {
    // Declare anchor
    Node *temp = head;

    // Cycle through the list until the last Node, which is the (n-1) from NULL
    while (temp->next != NULL)
    {
      temp = temp->next;
    }

    cout << "Reversing from: " << temp->data << endl;
    // Cycle back using ->prev and print it until the first Node (head)
    while (temp != NULL)
    {
      cout << temp->data << " - ";
      temp = temp->prev;
    }

    return;
  }
};

int main()
{
  DoublydoublyLinkedList doublyLinkedList = DoublydoublyLinkedList();

  int insertValue, targetIndex, answer;
  bool continueProgram = true;

  while (continueProgram == true)
  {
    cout << endl;
    cout << endl;
    cout << "Doubly Linked List Program" << endl;
    cout << "What do you want to do? " << endl;
    cout << "1.) Insert number at first position" << endl;
    cout << "2.) Insert number at nth position" << endl;
    cout << "3.) Delete number at nth position" << endl;
    cout << "4.) Print the list" << endl;
    cout << "5.) Print reverse the list" << endl;
    cout << "6.) Exit program" << endl;
    cin >> answer;

    if (answer == 1)
    {
      cout << "Insert the number for 1st pos:" << endl;
      cin >> insertValue;

      doublyLinkedList.insertFirst(insertValue);
      doublyLinkedList.print();
    }
    else if (answer == 2)
    {
      cout << "Type the number to be inserted:" << endl;
      cin >> insertValue;
      cout << "Type the index position for the insertion:" << endl;
      cin >> targetIndex;

      doublyLinkedList.insertAt(insertValue, targetIndex);
      doublyLinkedList.print();
    }
    else if (answer == 3)
    {
      cout << "Type the index position for the deletion:" << endl;
      cin >> targetIndex;

      doublyLinkedList.deleteAt(targetIndex);
      doublyLinkedList.print();
    }
    else if (answer == 4)
    {
      cout << "Printing..." << endl;
      doublyLinkedList.print();
    }
    else if (answer == 5)
    {
      cout << "Printing in reverse..." << endl;
      doublyLinkedList.printReverse();
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