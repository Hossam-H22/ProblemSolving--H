// link :- https://codeforces.com/group/Lq34voxr4E/contest/350978/problem/D
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long D, S;
    cin >> D >> S;
    if (S >= 1 && D >= 1)
    {
        if (S >= ((2 * D) / 3.0))
            cout << "Sunny Day";
        else if (S <= (D / 3.0))
            cout << "Rainy Day";
        else
            cout << "Cloudy Day";
    }


    return 0;
}