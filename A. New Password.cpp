// link :- https://codeforces.com/contest/770/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    while (n--)
    {
        char ch = 'a'+(n%k);
        cout << ch;
    }
    return 0;
}
