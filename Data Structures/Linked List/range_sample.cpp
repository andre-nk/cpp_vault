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
                //? Creating new Node in memory
                Node *temp = new Node();

                //? Assigning params value
                temp->data = nodeValue;

                //? Assigning next Node's address (because the new Node will always be the first)
                //? If the list is empty, the current head is null (VALID), bcs there's no other Node yet
                //? If the list is not empty, the new Node will be the new head, thus the current head will be the 2nd Node or next node for the 1st one!
                temp->next = head;

                //? Shifting the old head to the 2nd Node and assigning temp as the head node
                head = temp;
        }

        void getShortestRange()
        {
                Node *current = head;
                Node *next = current->next;
                int currentShortestRange = (current->data - next->data);

                while (current->next != NULL)
                {
                        cout << "Current: " << current->data << endl;
                        cout << "Next: " << current->next->data << endl;

                        int newRange = (current->data - current->next->data);
                        if (newRange < 0)
                        {
                                newRange = newRange * -1;
                        }

                        cout << "New Range: " << newRange << endl;
                        if (newRange <= currentShortestRange)
                        {
                                currentShortestRange = newRange;
                        }

                        current = current->next;
                }

                // if(currentShortestRange < 0){
                //         cout << "Shortest range: " << (currentShortestRange * -1) << endl;
                // } else {
                cout << "Shortest range: " << currentShortestRange << endl;
                // }
        }

        void getWidestRange()
        {
        }

        void print()
        {
                int length = 0;
                Node *temp = head;

                //? If the the list is empty or this is the last Node, the next will be NULL, thus stopping the loop
                cout << "The Linked List children: ";
                while (temp != NULL)
                {
                        length++;
                        cout << temp->data << " - ";
                        //? Replacing the current temp with the next Node's address
                        temp = temp->next;
                }
                cout << endl;
                cout << "The List's length: " << length << endl;
                cout << endl;
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
                cout << "2.) Get shortest range" << endl;
                cout << "3.) Get widest range" << endl;
                cout << "4.) Print list" << endl;
                cout << "5.) Exit program" << endl;
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
                        linkedList.getShortestRange();
                }
                else if (answer == 3)
                {
                        linkedList.getWidestRange();
                        linkedList.print();
                }
                else if (answer == 4)
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