#include <iostream>

using namespace std;

void hh(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}

int main(){
    int a = 2021, b = 1000;
    hh(a, b);
    cout << a << " " << b << endl;
}