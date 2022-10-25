#include<iostream>
using namespace std;

double calculate_area(double length, double width, double height);
double calculate_volume(double length, double width, double height);

int main()
{
    double length, width, height;

    cout << "Masukkan panjang balok: ";
    cin >> length;

    cout << "Masukkan lebar balok: ";
    cin >> width;

    cout << "Masukkan tinggi balok: ";
    cin >> height;

    cout << "Luas permukaan balok adalah " << calculate_area(length, width, height) << endl;
    cout << "Volume balok adalah " << calculate_volume(length, width, height) << endl;
    return 0;
} // 9

double calculate_area(double length, double width, double height)
{
    return 2 * (length * width + length * height + width * height);
}

double calculate_volume(double length, double width, double height)
{
    return length * width * height;
}