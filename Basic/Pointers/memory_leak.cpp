#include <stdio.h>
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    //Memory leaks happen when our program reserve memory via new, but somehow lost access to its during the flow
    //Either from reassinging pointers or passed local pointer

    //#1 Reassinging Pointer:
    int *p_number1(new int(54)); //reserve
    int number2(69);

    cout << "Pre Reassignment: " << *p_number1 << endl;

    //SOLUTION => delete p_number1, before any reassignment
    //delete p_number1;
    
    p_number1 = &number2; //reassinging, thus new int(54) is lost (leaking)
    cout << "Post Reassignment: " << *p_number1 << endl;

    //#2 Nested / Scoped Pointer:
    cout << endl;
    {
        int *p_number3(new int(52));
    }
    //new int(52) is lost (leaking), since p_number3 can't be accessed

    return 0;
}