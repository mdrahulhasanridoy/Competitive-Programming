#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y, e ,o , p , n;
    e = o = p = n = 0;
    cin >> x;
    while(x--){
        cin >> y;
        if(y % 2 == 0)
            e++;
        if(y % 2 != 0)
            o++;
        if(y > 0)
            p++;
        if(y < 0)
            n++;
    }
    cout << "Even: " << e << endl;
    cout << "Odd: " << o << endl;
    cout << "Positive: " << p << endl;
    cout << "Negative: " << n << endl;
}