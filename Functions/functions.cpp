#include <iostream>

using namespace std;

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

template <typename T> T tempMax(T x, T y){
    return x > y ? x : y;
}

int main(int argc, const char *argv[])
{
    cout << max(2, 4) << endl;
    cout << tempMax(8, 3) << endl;

    return 0;
}
