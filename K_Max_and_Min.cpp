#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    
    //To print the minimum and maximum of two numbers in C++, you can use the built-in functions min() and max() from the algorithm header.

    cout << min({x,y,z}) << " "<< max({x,y,z}) << endl;
}
    //Type 2
    /*
    if(x > y)
        swap(x,y);
    if(y > z)
        swap(y,z);
        if(x > y)
        swap(x,y);
    
    cout << x << " " << z << endl;
    */

    //Type 3
    /*
    int min, max;
    
    //finding minimum
    if(x <= y && x <= z)
        min = x;
    else if(y <= x && y <= z)
        min = y;
    else
        min = z;

    //finding max
    if(x >= y && x >= z)
        max = x;
    else if(y >= x && y >= z)
        max = y;
    else
        max = z;

        cout << min << " " << max << endl;
    */