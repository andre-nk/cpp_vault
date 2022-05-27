//
//  pointer_rules.cpp
//  Pointers
//
//  Created by Andreas Notokusumo on 25/05/22.
//

#include <iostream>
using namespace std;

int pointer_rules(int argc, const char * argv[]) {
    //Printing guide:
    //& is always for getting the pointer or variable address;
    //* is always for getting pointer's value (original var);
    //plain is for the default pointer's or original var's value (address for pointers or real value for var);
    //use const *p_number1 to make the pointer target fix;
    
    int number1{24};
    int *p_number1{&number1};
    cout << endl;
    cout << "Good practices:" << endl;
    cout << number1 << endl;
    //Plain print => Address (equal to &number1 (original address)
    cout << p_number1 << endl;
    //Star print => value
    cout << *p_number1 << endl;
    //And print => other Address (pointer address)
    cout << &p_number1 << endl;
    
    
    //Writing into uninitialized pointer through dereference
    int *p_number2; // Contains junk address : could be anything
    *p_number2 = 55; // Writing into junk address : BAD!
    cout << endl;
    cout << "Writing into uninitialized pointer through dereference" << endl;
    cout << "p_number2" << p_number2 << endl; // Reading from junk address.
    cout << "*p_number2" << *p_number2 << endl;
    
    
    //Initializing pointer to null
    //int *p_number3 {nullptr}; // Also works
    int * p_number3 ();// Initialized with pointer equivalent of zero: nullptr
    // A pointer pointing nowhere
    //*p_number3 = 33; // Writting into pointer pointing nowhere : BAD, CRASH
    cout << endl;
    cout << "Reading and writting through nullptr" << endl;
    //std: : cout << "p_number3 << p_number3 <‹ std: : endl;
    //std: : cout ‹< "*p_number3 : << *p_number3 <‹ std:: endl;// Reading from nullptr
    // BAD, CRASH.
    
    return 0;
}
