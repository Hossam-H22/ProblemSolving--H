// link :- https://codeforces.com/group/Lq34voxr4E/contest/353760/problem/E
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main()
{
    int t;
    ll input;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> input;
        ll con = 1;
        while (con <= input)
        {
            cout << input;
            if (con < input) cout << " ";
            con++;
            if (con > input) cout << endl;
        }
    }

    return 0;
}