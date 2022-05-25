//
//  main.cpp
//  Pointers
//
//  Created by Andreas Notokusumo on 24/05/22.
//

#include <iostream>
using namespace std;

int pointer_size(int argc, const char * argv[]) {
    //int size is 8
    int int_var{42};
    int *p_int_var{&int_var};
    
    //double size is 8
    double double_var{42.3};
    double *p_double_var{};
    
    //string size is 24
    string string_var{"abcdfsuhasdfjhgaksjdhfgkdhajsfg"};
    string *p_string_var{&string_var};

    //Size of pointer will always be the same (int, double, string), which is 8!
    cout << sizeof(int_var) << endl;
    cout << sizeof(p_int_var) << endl;
    
    cout << sizeof(double_var) << endl;
    cout << sizeof(p_double_var) << endl;

    cout << sizeof(string_var) << endl;
    cout << sizeof(p_string_var) << endl;
    
    return 0;
}
