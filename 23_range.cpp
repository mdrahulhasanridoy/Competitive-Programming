#include<bits/stdc++.h>
using namespace std;

int main() {
    int i = 2147483647;
    cout << i+1 << endl; //-2147483648
    //Maximum Value + 1 = Minimum Value, It's overflow. It's like a circle. 
    //[MAX ---> MIN ----> 0 ----> MAX ----> MIN ---> 0 ----->MAX..........][]

    int x = 1 << 30; //2^30
    int y = 1 << 30;  //2^30
    cout << x + y << endl; // -2147483648


//    cout << INT_MIN << endl; // -2147483648
//    cout << INT_MAX << endl; // 2147483647
}