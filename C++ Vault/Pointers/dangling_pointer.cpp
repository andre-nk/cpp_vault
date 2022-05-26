//
//  dangling_pointer.cpp
//  C++ Vault
//
//  Created by Andreas Notokusumo on 26/05/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    //Dangling => chained
    //3 problems to avoid:
        //1. Usage of uninitialised pointer
        //2. Usage of deleted pointer (without reassignment beforehand)
        //3. Multiple pointers for same address
            //The other pointer could crash the program, if the original pointer is deleted

    //======//
    //#1: Uninitialised Pointer
    //int *p_number0; //unassigned ptr => random
    
    //cout << endl;
    //cout << *p_number0 << endl; //possible crash
    
    //Solution => init pointer or check for nullptr
    int *p_number0{nullptr}; //null assign, but predictable
    
    cout << endl;
    if(p_number0 != nullptr){
        cout << *p_number0 << endl;
    } else {
        //predicted
        cout << "Null pointer!" << endl;
    } //possible crash
    //==========//
    
    //======//
    //#2: Use of Deleted Pointer
    cout << endl;
    //init original var and its pointer
    int *p_number1{new int{67}};
    
    //normal
    cout << "Pre-Delete: " << *p_number1 << endl;
    
    //Issue:
        //delete original var
        //delete p_number1;
        //Thus, pointer becomes random (possible crash)
        //cout << "Post-Delete: " << *p_number1 << endl;
    
    //Solution => reset pointer to nullptr and check
    delete p_number1;
    p_number1 = nullptr;
    if(p_number1 != nullptr){
        cout << *p_number1 << endl;
    } else {
        //predicted
        cout << "Invalid memory access!" << endl;
    } //possible crash
    //======//
    
    //======//
    //#3 => Multiple Chaining Pointers
    int *p_number2{new int{27}}; //init var and pointer
    int *p_number3{p_number2}; //chain pointer to other ptr
    
    cout << endl;
    cout << "Ori Pointer: " << p_number2 << endl;
    cout << "Chained Pointer: " << p_number3 << endl;
    
    //Delete original pointer;
    //delete p_number2;
    
    //Unpredictable pointer to deleted memory
    //cout << "Chained Pointer (post ori deleted): " << p_number3 << endl;
    
    //Solution => reassign ori pointer and only use chained ptr if the original is valid (check null)
    cout << endl;
    if(p_number2 != nullptr){
        //Will be valid (pre-deletion)
        cout << "Valid chained ptr: " << p_number3 << endl;
    } else {
        cout << "Trying to use invalid p_number3" << endl;
    }
    
    delete p_number2;
    p_number2 = nullptr;
    
    //Won't be valid (post deletion)
    if(p_number2 != nullptr){
        cout << "Valid chained ptr: " << p_number3 << endl;
    } else {
        cout << "Trying to use invalid p_number3" << endl;
    }
    
    return 0;
    //======//
}
