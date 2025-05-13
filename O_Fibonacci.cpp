#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    long long f = 0, s = 1, t;
    if (n == 1)
        cout << 0;
    else if (n == 2)
        cout << 1;
    else
    {
        while (n > 2)
        {
            t = f + s;
            f = s;
            s = t;
            n--;
        }
        cout << t;
    }
}
