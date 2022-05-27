#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    int num1(27);

    //D1: Declaration
    int& ref_num1(num1);
    int *p_num1(&num1);

    //D2: Printing
    cout << num1 << endl;
    cout << ref_num1 << endl;
    cout << *p_num1 << endl;

    //D3: Writing
    ref_num1 = 69;
    *p_num1 = 69;

    cout << endl;
    cout << ref_num1 << endl;
    cout << *p_num1 << endl;

    //D4: Reset target
    //References can't be resetted and must be instantiated directly;
    //Pointers can be resetted and can be instantiated as null (garbage memory);
    int num2(81);
    p_num1 = &num2;

    cout << endl;
    cout << *p_num1 << endl;

    //S1:
    //Reference behaves like const pointers, but simpler

    return 0;
}