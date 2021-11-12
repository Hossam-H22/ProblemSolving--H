// link :- https://codeforces.com/group/Lq34voxr4E/contest/353760/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ll n, even = 0, odd = 0;
    cin >> n;
    while (n > 0)
    {
        int rem = n % 10;
        if (rem % 2 == 0)
            even++;
        else
            odd++;
        n = n / 10;
    }
    cout << "Even : " << even << endl;
    cout << "Odd : " << odd << endl;

    return 0;
}