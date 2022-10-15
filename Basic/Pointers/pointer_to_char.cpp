//
//  pointer_to_char.cpp
//  Pointers
//
//  Created by Andreas Notokusumo on 24/05/22.
//

#include <iostream>
using namespace std;

int pointer_to_char(int argc, const char * argv[]) {
    //The usual pointer will print memory address (on plain and &), and value on (*)
    //& is for getting memory address
    //* is for getting pointer's value (first char)
    //plain pointer could be printed as its memory address or whole pointer's value (not just first char)
    
    //This first line is a pure char and but can't be a pointer, instead it need to be passed to the 2nd one
    char char_const{'n'};
    char *p_char_const{&char_const};
    cout << *p_char_const << endl;
    
    //This is a pointer via magic conversion from char to string (converted to series of array), but it's basically not allowed
    //But, using this declaration, the user can't modify this "string"
    char *char_var{"Noah"};
    
    //This will print the pointer address
    cout << &char_var << endl;
    
    //This will print the first char: "N" as its pointed by the pointer
    cout << *char_var << endl;
    
    //This will print the whole "array" string
    cout << char_var << endl;
    

    
    //Try to use const keyword to allow this
    const char *char_var_1{"Peterpan"};
    cout << char_var_1 << endl;
    
    
    //Try to use array declaration if the user wants to modify it (not as a pointer)
    char char_var_2[]{"Ariel"};
    char_var_2[1] = 'd';
    cout << char_var_2 << endl;

    return 0;
}
