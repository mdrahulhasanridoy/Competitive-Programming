#include<iostream>
using namespace std;

int main(){
    int x = 5;
    int y = 7;
    int z = 10;

    int age;
    cin >> age;
    bool disable;
    cin >> disable;

    if( x < y && y < z)
        cout << "Y is in between" << endl;
    else
        cout << "Y is not between" << endl;
    if( age > 65)
        cout << "Senior Citizen Benefits" << endl;
    else if(disable)
        cout << "Disable Benefits" << endl; // this done then skip others
    else
        cout << "No Benefits" << endl;
}