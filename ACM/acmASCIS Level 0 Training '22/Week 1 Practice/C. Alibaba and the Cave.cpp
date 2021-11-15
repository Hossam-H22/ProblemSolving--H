// link :- https://codeforces.com/group/Lq34voxr4E/contest/352324/problem/C
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a + b - c == d)
        cout << "YES";
    else if (a + b * c == d)
        cout << "YES";
    else if (a - b + c == d)
        cout << "YES";
    else if (a - b * c == d)
        cout << "YES";
    else if (a * b + c == d)
        cout << "YES";
    else if (a * b - c == d)
        cout << "YES";
    else
        cout << "NO";


    return 0;
}