// link :- https://codeforces.com/group/Lq34voxr4E/contest/354972/problem/D
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
    int t;
    ll cont=0, l=-1, a;
    cin>>t;
    while (t--)
    {
        cin>>a;
        if (a>l)
        {
            cont++;
            l=a;
        }
        else l=LONG_LONG_MAX;

    }
    cout<<cont;

    return 0;
}