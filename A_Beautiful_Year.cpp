#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int y;
    cin >> y;
    while (true) {
        y++;
        int m = y % 10;
        int n = (y / 10) % 10;
        int o = (y / 100) % 10;
        int p = (y / 1000) % 10;

        if (m != n && m != o && m != p &&
            n != o && n != p && o != p) {
            cout << y << endl;
            break;
        }
    }
}