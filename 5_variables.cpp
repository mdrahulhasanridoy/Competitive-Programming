#include<iostream>
using namespace std;

int main(){
    // int = interger
    int x = 10, z = 2;
    x = 7; // we can update value
    int y; // undefined value
    cout << x << endl;
    cout << y << endl; //error or garbage value

    x = x + z; // x = 7 + 2
    y = x * z; // y = 9 * 2
    cout << x << endl; // 9
    cout << y << endl; // 18

    int w = 2;
    //int w = 10 <---- we cannot do this..it's not allow

    char c = 102;
    cout << c << endl; //output : f
}
