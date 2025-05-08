#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll w, x, y, z;
    cin >> w >> x >> y >> z;
    w = w % 100;
    x = x % 100;
    y = y % 100;
    z = z % 100;
    ll ans = w * x * y * z;
    ans = ans % 100;
    if(ans<10){
        cout << 0 << ans;
    }
    else{
        cout << ans;
    }
}