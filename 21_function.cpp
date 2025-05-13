#include <bits/stdc++.h>
using namespace std;

//null is value
//void is datatype

int maxi(int a, int b, int c, int d){
    int max_val = a;
    if(b > max_val) max_val = b;
    if(c > max_val) max_val = c;
    if(d > max_val) max_val = d;

    return max_val;
}
int main(){
    cout << maxi(1, 3, 4, 2) << endl;
}