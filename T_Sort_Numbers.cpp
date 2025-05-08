#include<iostream>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >>z;

    int a = x, b = y, c = z;
    
    if(x > y){
        swap(x,y);
    }
    if(y>z){
        swap(y,z);
        if(x > y){
            swap(x,y);
    }
}
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    cout << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}