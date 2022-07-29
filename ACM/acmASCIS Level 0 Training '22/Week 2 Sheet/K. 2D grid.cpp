// link :- https://codeforces.com/group/Lq34voxr4E/contest/352164/problem/K
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf 0x3f3f3f3f3f3f3f3f
#define file freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fo1(s, n) for(int i=s ; i<n ; i++)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int main()
{
    ll n, m, sum=0;
    cin>>n>>m;
    m--;
    for (ll i=0 ; i<n ; i++)
    {
        sum+=((i+m)*(i+m+1))/2;
        sum-= ((i+1)*i)/2;
        sum+=i;
    }
    cout<<sum;

    return 0;
}