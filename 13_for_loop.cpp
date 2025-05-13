#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i = 0; i < 5; i++){
        cout << i << endl;
    } 
    /*
    0
    1
    2
    3
    4
    */
    cout << endl;
    for(int j = 0; j <= 5; j++){
        j += 10;
        cout << j << endl;
        j -= 10;
    } 
    /*
    10
    11
    12
    13
    14
    15
    */
   cout << endl;
   for(int k = 0, l = 0; k < 5 && l < 7; k++, l += 2){
    cout << k << endl;
    /*
    0
    1
    2
    3
    */
   }
}