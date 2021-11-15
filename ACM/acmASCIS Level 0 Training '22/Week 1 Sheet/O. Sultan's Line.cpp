// link :- https://codeforces.com/group/Lq34voxr4E/contest/350978/problem/O
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int X1, Y1, X2, Y2, X3, Y3;
    cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3;
    if ((X2 - X1) * (Y3 - Y2) - (Y2 - Y1) * (X3 - X2) == 0)
        cout << "Yes";
    else
        cout << "No";



    return 0;
}