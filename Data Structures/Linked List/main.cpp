#include <iostream>
using namespace std;

// no need custom class e.g. Stack, because Linked List's children is separated in memory wise
struct Node
{
    int data;
    struct Node *next;
};

//?define global Node which is the head / the first Node.
struct Node *head;

void insertFirst(int nodeValue)
{
    //? Creating new Node in memory
    struct Node *temp = new Node();

    //? Assigning params value
    temp->data = nodeValue;

    //? Assigning next Node's address (because the new Node will always be the first)
    //? If the list is empty, the current head is null (VALID), bcs there's no other Node yet
    //? If the list is not empty, the new Node will be the new head, thus the current head will be the 2nd Node or next node for the 1st one!
    temp->next = head;

    //? Shifting the old head to the 2nd Node and assigning temp as the head node
    head = temp;
}

// void insertAtCustom(int nodeValue, int targetIndex)
// {    
//     int index = 0;

        //? Assign temp as the head and create a new Node
//     struct Node *temp = head;
//     struct Node *newNode = new Node();


        //? Assign newNode data into nodeValue;
//     newNode->data = nodeValue;

        //? Define previous and next Node from the target index
//     struct Node *prevNode = NULL;
//     struct Node *nextNode = NULL;


        //? If temp / the head / the first Node is null, insert at the beginning!
//     if (temp == NULL)
//     {
//         cout << "The Linked List hasn't been initialized yet, inserting one at the beginning" << endl;
//         insertFirst(nodeValue);
//         return;
//     }

        //? If the targetIndex == 0 => insert at the beginning!
//     if(targetIndex == 0){
//         insertFirst(nodeValue);
//         return;
//     }

        //? Loop through the list where prevNode and nextNode pointers will be saved
//     while (temp != NULL)
//     {
//         if ((index + 1) == targetIndex)
//         {
//             cout << "Previous Node from Target Index has been found" << endl;
//             prevNode = temp;
//             temp = temp->next;
//         }
//         else if ((index - 1) == targetIndex)
//         {
//             cout << "Next Node from Target Index has been found" << endl;
//             nextNode = temp;
//             temp = NULL;
//         }
//         else
//         {
//             cout << "Processing" << endl;
//         }

//         index++;
//     }

        //? Updating prevNode's next into the new Node address;
//     prevNode->next = newNode;

        //? Assigning the new Node's next into the next Node address;
//     newNode->next = nextNode;
// }

void print()
{
    int length = 0;
    struct Node *temp = head;

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

int main()
{
    head = NULL;
    int insertionLength, insertValue, targetIndex;

    // cout << "Initialising Mock Linked List..." << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     insertFirst(i);
    //     print();
    // }

    //insertionLength for breaking the main loop
    cout << "How many times do you want to insert numbers?" << endl;
    cin >> insertionLength;

    for (int i = 0; i < insertionLength; i++){
        cout << "Enter the number you want to insert: " << endl;
        cin >> insertValue;

        cout << "Where do you want to insert this number? " << endl;
        cin >> targetIndex;

        cout << "Inserting " << insertValue << " at " << targetIndex << endl;
        // insertAt(insertValue, targetIndex);
        print();
    }
}