#include<iostream>
using namespace std;

int main(){
    int x = 5, y = 10, z = 13;
    cout << ((x < y) && (y < z)) << endl;
    //if both are true <--- 1

    cout << !((x < y) || (z < y)) << endl;
    //if one are true <--- 1 but their is also not so it's 0
}
