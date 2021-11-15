// link :- https://codeforces.com/group/Lq34voxr4E/contest/354972/problem/A
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
    io;
    int n, d;
    ll m, cont=0, a;
    cin>>n>>m>>d;
    fo1(0, n)
    {
        cin>>a;
        if (i%d==0)
        {
            if (a%m==0) cont++;
        }
    }
    cout<<cont;
    return 0;
}