// link :- https://codeforces.com/group/Lq34voxr4E/contest/350978/problem/B
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, cont=0;
    cin>>n;
    cont += (n/50);
    n -= (cont*50);
    cont+= (n/20);
    cont += (n%20);
    cout<<cont;

    return 0;
}