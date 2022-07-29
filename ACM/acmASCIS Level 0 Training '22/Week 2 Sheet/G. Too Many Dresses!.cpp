// link :- https://codeforces.com/group/Lq34voxr4E/contest/352164/problem/G
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
    int n, r;
    ll sum1=1, sum2=1, ways;
    cin>>n>>r;
    for (int i=1 ; i<=n ; i++) sum1 *=i;
    for (int s=1 ; s<=(n-r) ; s++) sum2 *= s;
    ways=sum1/sum2;
    cout<<ways;

    return 0;
}