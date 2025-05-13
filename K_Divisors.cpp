#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin >> x;
        for(int i = 1; i<=x; i++){
            if(x % i == 0){
                cout << i << endl;
            }
        }
}