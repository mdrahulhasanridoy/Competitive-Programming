#include<iostream>
using namespace std;
int main(){
    cout << 10/3 << endl;
    //dividing two integers givers back another  interger
    cout << 10/0 << endl;
    //it will crush or give you garbage value
    cout << 10 / 3.0 << endl;
    cout << 10.0/3 << endl;
    //float = decimal

    cout << 14 % 3 << endl;
    //you can found remainder value

    cout << (1 + 1) * 3 << endl;
    //it will badmas rules

    cout << (int) 'f' << endl;
    //it will char value into int valo <-- type casting

    cout << (char)('f' + 1) << endl;
    cout << (char)('f' - 1) << endl;

    //garbage value(undefined value) UB
    cout << 'gfhjas' << endl;
    //because we cannot  take more than one letter as char.
    
    cout << 'f' + 1 << endl; // it gives output as integer
    cout << (char) ('f' + 1) << endl; // it give you char
}