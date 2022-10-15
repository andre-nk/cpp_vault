//
//  dynamic_heap_memory.cpp
//  Pointers
//
//  Created by Andreas Notokusumo on 25/05/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int dynamic_heap_memory(int argc, const char * argv[]) {
    //Stack
            //Finite
            //Auto managed by the code flow and scopes (local blocks)
        
    //Heap
        //Finite
        //Explicitly managed by user code (new and delete keyword)
        //Will reserve a memory for this program only
    
    //
    //Dynamic Heap Memory Example #1:
    int *p_number1{nullptr}; //Initialize p_number1 original variable (null) along with its pointer
    
    //Hypothesis:
    //Apparently if I declare *p_numberx with new (var and its pointers), the plain print (p_number2) is also a pointer
    //Thus, if we want to get or assign p_numberx's value, we must use *p_numberx
    
    //Dynamically reserve OS memory for this pointer (program) until returned
    //p_number1 which has been declared above alongside with its pointer, will be assigned with 0 (new int);
    p_number1 = new int;
    
    //* print will produce p_number1 original value = 0; (&: pointer's address, plain: p_number1 address)
    cout << "Dynamic #1 Initial Value:" << *p_number1 << endl;
    
    //Assigning p_number1 to new value via its pointer (re: Hypothesis);
    *p_number1 = 88;
    
    cout << "Dynamic #1 Address: " << p_number1 << endl;
    cout << "Dynamic #1 Pointer Address: " << &p_number1 << endl;
    cout << "Dynamic #1 New Value:" << *p_number1 << endl;
    
    //Returning memory to OS
    delete p_number1;
    //Good practice to tell there's no longer any value here
    p_number1 = nullptr;
    //
    
    //
    //Dynamic Heap Memory Example #2:
    int *p_number2{new int{24}}; //direct init (var and its pointers)
    
    cout << endl;
    cout << "Dynamic #2 Address: " << p_number2 << endl;
    cout << "Dynamic #2 Pointer Address: " << &p_number2 << endl;
    cout << "Dynamic #2 Original Value: " << *p_number2 << endl;
    
    //Returning memory to OS
    delete p_number2;
    
    //Extremely bad to delete p_number2 (reserved heap memory) twice!;
    //delete p_number2;
    //Good practice to tell there's no longer any value here
    p_number2 = nullptr;
    //
    
    //Can reuse pointers after deletion
    p_number2 = new int(81);
    cout << endl;
    cout << "Dynamic #2 Reused Value: " << *p_number2 << endl;
    
    delete p_number2;
    p_number2 = nullptr;
    
    //
    
    return 0;
}
