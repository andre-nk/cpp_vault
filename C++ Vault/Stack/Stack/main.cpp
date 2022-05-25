//
//  main.cpp
//  Stack
//
//  Created by Andreas Notokusumo on 15/05/22.
//

#include <iostream>

using namespace std;

class Stack {
private:
    int lastIndex;
    int arr[5];
public:
    Stack(){
        lastIndex = -1;
        for (int i = 0; i < 5; i++) {
            arr[i] = 0;
        }
    }
    
    bool isEmpty(){
        if(lastIndex == -1){
            return true;
        } else {
            return false;
        }
    }
    
    bool isFull(){
        if(lastIndex == 4){
            return true;
        } else {
            return false;
        }
    }
    
    void push(int pushedItem){
        if(isFull()){
            cout << "Stack overflowed" << endl;
        } else {
            lastIndex++;
            arr[lastIndex] = pushedItem;
        }
    }
    
    int pop(){
        if(isEmpty()){
            cout << "Stack underflowed" << endl;
            return 0;
        } else {
            int poppedValue = arr[lastIndex];
            arr[lastIndex] = 0;
            lastIndex--;
            return poppedValue;
        }
    }
    
    void change(int index, int pushedItem){
        if(isEmpty()){
            cout << "Stack underflowed" << endl;
        } else {
            arr[index] = pushedItem;
        }
    }
    
    int count(){
        return lastIndex + 1;
    }
    
    void display(){
        cout << "All the values in this Stack are:" << endl;
            
        for (int i = 4; i >= 0; i--) {
            cout << arr[i] << endl;
        }
    }
    
    int peek(int index){
        if (isEmpty()){
            cout << "Stack underflowed" << endl;
            return 0;
        } else {
            return arr[index];
        }
    }
};


int stack_main(int argc, const char * argv[]) {
   
    Stack stackExample;
    int option, position, value;
    
    do {
        cout<<"What operation do you want to perform? Select Option number. Enter auto exit." << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()"<< endl;
        cout << "5. peek()" << endl;
        cout << "6. count ()" << endl;
        cout << "7. change()" << endl;
        cout << "8. display()" << endl;
        cout << "9. Clear Screen"<< endl;
        
        cin >> option;
        switch (option) {
            case 1:
                cout << "Enter an int value to be pushed into the Stack: " << endl;
                cin >> value;
                
                stackExample.push(value);
                break;
            
            case 2:
                cout << "Popped value is: " << stackExample.pop() << endl;
                break;
                
            case 3:
                if(stackExample.isEmpty()){
                    cout << "The example stack is empty";
                } else {
                    cout << "The example stack is filled";
                }
                break;
                
            case 4:
                if(stackExample.isFull()){
                    cout << "The example stack is full";
                } else {
                    cout << "The example stack is not full";
                }
                break;
                
            case 5:
                cout << "Enter the index of desired a value to be peeked from the stack: " << endl;
                cin >> value;
                
                cout << "The peeked value is: " << stackExample.peek(value) << endl;
                break;
                
            case 6:
                cout << "The example stack's length is: " << stackExample.count() << endl;
                break;
                
            case 7:
                cout << "Enter a value for the replacement: " << endl;
                cin >> value;
                
                cout << "Enter the index for the replacement: " << endl;
                cin >> position;
                
                stackExample.change(position, value);
                break;
            
            case 8:
                stackExample.display();
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
