// link :- https://codeforces.com/group/Lq34voxr4E/contest/350978/problem/N
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int k, w;
    long long n, sum = 0;
    cin >> k >> n >> w;
    for (int i = 1 ; i <= w ; i++)
    {
        sum = sum + (i*k);
    }
    if (n >= sum)
    {
        cout << 0;
    }
    else
    {
        cout << (sum - n);
    }



    return 0;
}