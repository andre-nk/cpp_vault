#include <iostream>
using namespace std;

class Queue
{
private:
    int head;
    int tail;
    int maxSize;

public:
    int *arr = new int[maxSize];

    Queue(int _maxSize)
    {
        maxSize = _maxSize;
        head = -1;
        tail = -1;
        for (int i = 0; i < maxSize; i++)
        {
            arr[i] = 0;
        }
    }

    bool isEmpty()
    {
        return head == -1 && tail == -1;
    }

    bool isFull()
    {
        return tail == maxSize - 1;
    }

    // insert newItem from the back (tail)
    void enqueue(int newItem)
    {
        if (isFull())
        {
            cout << "Error! Stack overflow" << endl;
            cout << "Expanding array..." << endl;

            int *tempArr = new int[maxSize * 2];
            for (int i = 0; i < maxSize; i++)
            {
                tempArr[i] = arr[i];
            }

            arr = tempArr;
            maxSize = maxSize * 2;

            free(arr);
        }

        if (isEmpty())
        {
            head++;
        }

        tail++;
        arr[tail] = newItem;
    }

    // remove item from the head
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "No items in the list yet. Nothing to remove!" << endl;
            return;
        }

        arr[head] = 0;
        head++;
    }

    void print()
    {
        for (int i = 0; i < maxSize; i++)
        {
            cout << arr[i] << " - ";
        }
    }
};

int main(int argc, const char *argv[])
{
    Queue queueInstance = Queue(4);
    int option, value;

    do
    {
        cout << "What operation do you want to perform? Select Option number. Enter auto exit." << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()" << endl;
        cout << "5. print()" << endl;
        cout << "9. Clear Screen" << endl;

        cin >> option;

        cout << endl;
        switch (option)
        {
        case 1:
            cout << "Input the newItem to be enqueued into the Queue: " << endl;
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
            if (queueInstance.isFull())
            {
                cout << "The queue is full" << endl;
            }
            else
            {
                cout << "The queue is not full" << endl;
            }
            break;

        case 5:
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
