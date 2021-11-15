// link :- https://codeforces.com/group/Lq34voxr4E/contest/353702/problem/B
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ll b, o, t;
    cin>>b>>o>>t;
    if (b>o&&b<t || b<o&&b>t) cout<<"Bedo";
    else if (o>b&&o<t || o<b&&o>t) cout<<"Omar";
    else cout<<"Tarek";

    return 0;
}

