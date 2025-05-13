#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; //5
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; //Input: 1 2 3 4 5
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " "; //Output: 1 2 3 4 5
    }
    cout << endl;
}