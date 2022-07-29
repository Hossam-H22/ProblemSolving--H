// link :- https://codeforces.com/group/Lq34voxr4E/contest/350978/problem/M
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long x1, y1, R1, x2, y2, R2;
    double d;
    cin >> x1 >> y1 >> R1 >> x2 >> y2 >> R2;
    d = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    if (d > (R1 + R2))
        cout << "no";
    else
        cout << "yes";


    return 0;
}