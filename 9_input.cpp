#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;

    int b, c, d;
    cin >> b >> c >> d;

    string e, f, g;
    cin >> e >> f >> g;


    cout << a <<  endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;

    cout << e << endl;
    cout << f << endl;
    cout << g << endl;

    string h, i, j;
    getline(cin, h); //for sentence
    getline(cin, i);
    getline(cin, j);
    //getline pretty slow, so it's doesnot use 99.99% in CP
    cout << h << endl;
    cout << i << endl;
    cout << j << endl;
}