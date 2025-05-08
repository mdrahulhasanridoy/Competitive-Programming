#include<iostream>
using namespace std;

int main(){
    int a = 5;
    a = -5;
    cout << a << endl; // -5

    int b = 6;
    cout << -b << endl; // -6

    int c = 6;
    cout << +c << endl; // 6

    // + and ++ basically have nothing in common
    // - and -- basically have nothing in common
    
    int d = 5, e = 6;
    d++; // d += 1 or d = d+1  <--- pre-increment
    ++e; // e += 1 or e = e+1  <--- post-increment
    cout << a << endl; // 6
    cout << b << endl; // 6

    int f = 5, g = 6;
    cout << ++f << endl; // f is increased first then used - 6
    cout << g++ << endl; // g is used first then increased - 5

    
}