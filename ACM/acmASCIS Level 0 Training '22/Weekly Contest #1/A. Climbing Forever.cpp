// link :- https://codeforces.com/group/Lq34voxr4E/contest/353702/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ll n, a, b, m, bt, out;
    cin>>n>>a>>b;
    m=n/a;
    bt=b+m-1;
    out=((n*(n+1))/2)-(a*((m*(m+1))/2))+((bt*(bt+1))/2 )-(((b-1)*b)/2);
    cout<<out;
 
 
    return 0;
}