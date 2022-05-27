#include <stdio.h>
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int num1(2);
    int& ref_num1(num1);

    cout << num1 << endl;
    cout << &num1 << endl;

    //Exactly the same (value and address)
    cout << ref_num1 << endl;
    cout << &ref_num1 << endl;

    //Updating num1 value through its reference
    ref_num1 = 5;
    cout << endl;
    cout << "Post Update: " << endl;
    cout << num1 << endl;
    cout << &num1 << endl;

    cout << ref_num1 << endl;
    cout << &ref_num1 << endl;

    return 0;
}