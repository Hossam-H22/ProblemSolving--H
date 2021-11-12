// link :- https://codeforces.com/group/Lq34voxr4E/contest/353760/problem/B
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ll n;
    cin >> n;
    long long input;
    cin >> input;
    long long maxi = input;
    for (int i = 2; i <= n; i++)
    {
        cin >> input;
        if (input >= maxi)
            maxi = input;
    }
    cout << maxi;

    return 0;
}