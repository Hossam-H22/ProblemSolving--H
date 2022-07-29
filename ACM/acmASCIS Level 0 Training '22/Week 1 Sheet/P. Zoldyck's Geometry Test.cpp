// link :- https://codeforces.com/group/Lq34voxr4E/contest/350978/problem/P
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    float R, S, sum;
    cin >> R >> S;
    sum = S * 1.414213562;
    if (2 * R <= S)
            cout << "Square";
    else if ( (2 * R) >= sum )
            cout << "Circle";
        else
            cout << "Complex";


    return 0;
}