#include<bits/stdc++.h>
using namespace std;
#define YES cout << "YES\n";
#define NO cout << "NO\n";

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x, count = 0;
    cin >> x;
    for(int i = 1; i <= x; i++){
        if(x % i == 0)
        count++;
    }
    if(count == 2){
        YES;
    }
    else{
        NO;
    }
}