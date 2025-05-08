#include<iostream>
using namespace std;

int main() {
    int a = 12;
    a = 1.21;
    cout << a << endl; //output : 1; date loss it's gives you only int value

    float b = 5;
    b = 3.2312;
    cout << b << endl; // no data loss

    //premitive data <--- orginal data type, they are pre-define

    bool z = true; // true(1) or false (0)

    cout << z << endl; //output : 1

    cout << (bool)0 << endl; //output : 0
    cout << (bool)1 << endl; //output : 1
    cout << (bool)-1 << endl; //output : 1A
}