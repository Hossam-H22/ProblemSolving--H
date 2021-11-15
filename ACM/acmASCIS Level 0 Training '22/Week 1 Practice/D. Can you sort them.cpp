// link :- https://codeforces.com/group/Lq34voxr4E/contest/352324/problem/D
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    long long A, B, C;
    cin >> A >> B >> C;
    if (A <= B && B <= C)
        cout << A << " " << B << " " << C;
    else if (B <= A && A <= C)
        cout << B << " " << A << " " << C;
    else if (C <= B && B <= A)
        cout << C << " " << B << " " << A;
    else if (C <= A && A <= B)
        cout << C << " " << A << " " << B;
    else if (B <= C && C <= A)
        cout << B << " " << C << " " << A;
    else if (A <= C && C <= B)
        cout << A << " " << C << " " << B;



    return 0;
}