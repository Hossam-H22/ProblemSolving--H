// link :- https://codeforces.com/group/Lq34voxr4E/contest/353702/problem/D
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ull a, b, x;
    cin>>a>>b;
    x=LONG_LONG_MAX - a;
    if (b<=x) cout<<"NO";
    else cout<<"YES";

    return 0;
}