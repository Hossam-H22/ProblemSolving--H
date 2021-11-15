// link :- https://codeforces.com/group/Lq34voxr4E/contest/350978/problem/G
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;


int main()
{
    ull n, m, x;
    cin>>n>>m>>x;
    if (m%2!=0) m++;
    if (m>n) m=m%n;
    x+=m;
    if (x>n) x-=n;
    cout<<x;


    return 0;
}