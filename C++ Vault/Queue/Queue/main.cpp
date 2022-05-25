//
//  main.cpp
//  Queue
//
//  Created by Andreas Notokusumo on 17/05/22.
//

#include <iostream>
using namespace std;

class Queue {
private:
    int front;
    int rear;
    int arr[4];
public:
    Queue(){
        front = -1;
        rear = -1;
        for (int i = 0; i < 4; i++) {
            arr[i] = 0;
        }
    }
    
    bool isEmpty(){
        //front and rear will both have -1 when the queue is empty
        if(front == -1 && rear == -1){
            return true;
        } else {
            return false;
        }
    }
    
    bool isFull(){
        //rear will be incremented to the end
        if(rear == 4 - 1){
            return true;
        } else {
            return false;
        }
    }
    
    //insert newItem from the back (rear)
    void enqueue(int newItem){
        if(isFull()){
            return;
        } else if (isEmpty()){
            //isEmpty
            front = rear = 0;
        } else {
            //rear will be incremented and point next queue index (newItem target index location)
            rear++;
        }
        
        //assign newItem on target index location
        arr[rear] = newItem;
    }
    
    //remove item from the front
    int dequeue(){
        int x = 0;
        
        if(isEmpty()){
            return x;
        //front and rear will be same when the queue is empty or only contains one item
        } else if (front == rear){
            x = arr[front];
            
            //empty out the pointers, because the queue already empty too
            front = rear = -1;
        } else {
            x = arr[front];
            arr[front] = 0;
            
            //move front to point the next index (and left out unused left spaces with 0)
            front++;
        }
        
        return x;
    }
    
    void display(){
        for (int i = 0; i < 4; i++) {
            cout << arr[i] << endl;
        }
    }
};

int queue_main(int argc, const char * argv[]) {
    Queue queueInstance;
    int option, value;
    
    do {
        cout<<"What operation do you want to perform? Select Option number. Enter auto exit." << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()" << endl;
        cout << "5. display()" << endl;
        cout << "9. Clear Screen"<< endl;
        
        cin >> option;
        switch (option) {
            case 1:
                cout << "Input the newItem to be enqueued into the Queue: " << endl;
                cin >> value;
                
                queueInstance.enqueue(value);
                break;
                
            case 2:
                cout << "The dequeued value is: " <<  queueInstance.dequeue() << endl;
                
                break;
            
            case 3:
                if(queueInstance.isEmpty()){
                    cout << "The queue is empty" << endl;
                } else {
                    cout << "The queue is not empty" << endl;
                }
                break;
                
            case 4:
                if(queueInstance.isFull()){
                    cout << "The queue is full" << endl;
                } else {
                    cout << "The queue is not full" << endl;
                }
                break;
                
            case 5:
                queueInstance.display();
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
