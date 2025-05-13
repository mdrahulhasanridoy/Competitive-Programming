#include <bits/stdc++.h>
using namespace std;

int add(int a, int b){
    return a + b;
}

int main(){
    int a = 0, b = 2;
    cout << add(a,b) << endl; // 0 + 2 = 2
    a = 7; b = 10;
    cout << add(a,b) << endl; // 7 + 10 = 17
}