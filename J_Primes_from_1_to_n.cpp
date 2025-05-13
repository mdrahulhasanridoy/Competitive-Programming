#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x, count = 0;
    cin >> x;
    for(int i = 2; i <= x; i++){
        bool d = true;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                d = false;
                break;
            }
        }
        if(d){
            cout << i <<" ";
        }
    }
}
