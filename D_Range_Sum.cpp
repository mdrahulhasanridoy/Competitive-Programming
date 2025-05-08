#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        long long l,r;
        cin >> l >> r;
        if(l > r){
            swap(l,r);
        }
        l--;
        // long long x = (l * 1ll * (l + 1) / 2);
        // long long y = (r * 1ll * (r + 1) / 2);
        // long long ans = right - left;
        cout << ((r * 1ll * (r + 1) / 2) - (l * 1ll * (l + 1) / 2)) << endl;
    }
}

/*
📌 Sum from 1 to n is:
n * (n + 1) / 2


📌 r * 1ll * (r + 1)
To make sure the calculation is done using long long, not regular int.
If r is large (like 1e9), normal int would overflow.


🧠 The Main Idea:
We want to calculate the sum of all numbers from l to r, like this:

sum = l + (l+1) + (l+2) + ... + r
But instead of using a loop, the code uses a math trick.

📐 Math Formula Used:
The sum of all numbers from 1 to n is:

sum = n × (n + 1) / 2
So:
Sum from 1 to r = r × (r + 1) / 2
Sum from 1 to (l−1) = (l−1) × l / 2

If we subtract:

sum from l to r = (1 to r) − (1 to l−1)
That’s why before calculating:

l--;


✅ Final Summary:
We use l-- to make sure we calculate the sum from 1 to (l−1) using the formula.
Then subtract it from the sum from 1 to r to get the answer for the range [l, r].
*/
