#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double a, b, c, d;
    cin >> a >> b >> c >> d;
    // A ^ B > C ^ D
    // log (A ^ B) > log (C ^ D)
    // B. log(A) > D . log (C)
    if (b * (log(a)) > d * (log(c)))
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
}
