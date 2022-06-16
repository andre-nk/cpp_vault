#include <iostream>
using namespace std;

// no need custom class e.g. Stack, because Linked List's children is separated in memory wise
struct Node
{
  int data;
  Node *next;
};

//?define global Node which is the head / the first Node.
Node *head;

class LinkedList
{
private:
  Node *head = NULL;

public:
  void insertFirst(int nodeValue)
  {
    Node *temp = new Node();
    temp->data = nodeValue;
    temp->next = head;

    head = temp;
    return;
  }

  void insertAt(int value, int targetIndex)
  {
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    Node *prevNode = head;

    if (targetIndex == 0)
    {
      newNode->next = head;
      head = newNode;
      return;
    }

    for (int i = 0; i < targetIndex - 1; i++)
    {
      if (prevNode->next == NULL)
      {
        cout << "Insertion at outer bound!" << endl;
        return;
      }

      prevNode = prevNode->next;
    }

    newNode->next = prevNode->next;
    prevNode->next = newNode;
    return;
  }

  void deleteAt(int targetIndex)
  {
    Node *prevNode = head;

    if(targetIndex == 0){
      head = head->next;
      free(prevNode);

      return;
    }

    for (int i = 0; i < targetIndex - 1; i++)
    {
      if (prevNode->next == NULL)
      {
        cout << "Insertion at outer bound!" << endl;
        return;
      }

      prevNode = prevNode->next;
    }

    Node* currentNode = prevNode->next;
    prevNode->next = currentNode->next;

    free(currentNode);
    return;
  }

  void reverse()
  {
    Node *current, *next, *prev;

    current = head;
    prev = NULL;

    while (current != NULL)
    {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
    }
    
    //? Note: This is important, because by the end of the loop, the head will be null, which got no next for the printer!a
    head = prev;
    return;
  }

  void print()
  {
    Node *temp = head;
    while (temp != NULL)
    {
      cout << temp->data << " - ";
      temp = temp->next;
    }
    return;
  }
};

int main()
{
  LinkedList linkedList = LinkedList();

  int insertValue, targetIndex, answer;
  bool continueProgram = true;

  while (continueProgram == true)
  {
    cout << endl;
    cout << endl;
    cout << "Linked List Program" << endl;
    cout << "What do you want to do? " << endl;
    cout << "1.) Insert number at first position" << endl;
    cout << "2.) Insert number at n position" << endl;
    cout << "3.) Delete number at n position" << endl;
    cout << "4.) Reverse list" << endl;
    cout << "5.) Print list" << endl;
    cout << "6.) Exit program" << endl;
    cin >> answer;

    if (answer == 1)
    {
      cout << "Insert the number for 1st pos:" << endl;
      cin >> insertValue;

      linkedList.insertFirst(insertValue);
      linkedList.print();
    }
    else if (answer == 2)
    {
      cout << "Type the number to be inserted:" << endl;
      cin >> insertValue;
      cout << "Type the index position for the insertion:" << endl;
      cin >> targetIndex;

      linkedList.insertAt(insertValue, targetIndex);
      linkedList.print();
    }
    else if (answer == 3)
    {
      cout << "Type the index position for the deletion:" << endl;
      cin >> targetIndex;

      linkedList.deleteAt(targetIndex);
      linkedList.print();
    }
    else if (answer == 4)
    {
      linkedList.reverse();
      linkedList.print();
    }
    else if (answer == 5)
    {
      linkedList.print();
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