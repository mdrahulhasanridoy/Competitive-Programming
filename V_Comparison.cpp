#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    char c;
    bool ans;
    cin >> x >> c >> y;
    if(c == '<')
        if(x < y)
            ans = true;
        else
            ans = false;
    else if(c == '>')
        if(x > y)
            ans = true;
        else
            ans = false;
    else
        if(x == y)
            ans = true;
        else
            ans = false;

    if(ans)
        cout <<"Right";
    else
        cout <<"Wrong";
}
