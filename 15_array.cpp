#include<bits/stdc++.h>
using namespace std;

int main(){
    //index      0  1  2  3  4  5  6  7  8  9
    int a[10] = {1, 2, 3, 4, 5, 2, 3, 4, 5, 6};
    cout << a[0] << " " << a[1] << " " << a[7] << endl;
    //        1              2              4
    
    a[0] = 9; 
    cout << a[0] << " " << a[1] << " " << a[7] << endl;
    //        9              2              4

    a[2] += 7; // 3 + 7 = 10
    cout << a[2] << endl; 
}