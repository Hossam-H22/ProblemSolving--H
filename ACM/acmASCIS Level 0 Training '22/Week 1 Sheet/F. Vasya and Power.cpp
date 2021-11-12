// link :- https://codeforces.com/group/Lq34voxr4E/contest/350978/problem/F
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    int power1=log2(n);
    float power2=log2(n);
    (power1 == power2)? cout<<"YES\n" : cout<<"NO\n";

    return 0;
}