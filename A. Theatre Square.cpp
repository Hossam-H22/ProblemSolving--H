// link :- https://codeforces.com/contest/1/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, m, a;
    cin>>n>>m>>a;
    ll ans=ceil(n/(double)a) * ceil(m/(double)a);
    cout << ans;

    return 0;
}