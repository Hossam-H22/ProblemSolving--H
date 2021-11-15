// link :- https://codeforces.com/group/Lq34voxr4E/contest/354972/problem/B
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
    ll n, m, p, a, cont=0;
    cin>>n>>m;
    for (int i=0 ; i<n ; i++)
    {
        cin>>p;
        cont=p;
        bool happy=1;
        for (int z=0 ; z<m ; z++)
        {
            cin>>a;
            if (cont<a) happy=0;
            cont-=a;
            cont+=p;
        }
        if (happy) cout<<"Happy ";
        else cout<<"Upset ";
    }
    return 0;
}