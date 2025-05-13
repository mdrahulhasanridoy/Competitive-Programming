#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    // 0-based indexing means 0 to n-1
    // 1-based indexing means  1 to n

    int a[n+1]; // 0 to n
    for (int i = 1; i <= n; i++){ // 1 to n
        cin >> a[i];
    }

    // 1 2 3 4 5
    // i = a[0], a[1], a[2], a[3], a[4]
    
    for(auto i: a){ //for-each loop
        cout << i << " "; //Output: 1 2 3 4 5
    }
    cout << endl;
}