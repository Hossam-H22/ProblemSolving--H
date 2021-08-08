// link :-  https://codeforces.com/problemset/problem/7/C
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

ll a, b, c, x, y;
void move_step(ll& a, ll& b ,ll q)
{
    int next = a - q*b;
    a=b;
    b=next;
}
ll egcd(ll a, ll b, ll& x , ll& y)
{
    ll r = a, r1 = b;
    ll x1 = 0, y1 = 1;
    y = 0;
    x = 1;
    while (r1 != 0)
    {
        ll q = r/r1;
        move_step(x, x1 ,q);
        move_step(y, y1 ,q);
        move_step(r, r1 ,q);
    }
    return r;
}

int main()
{
    io;
    cin>>a>>b>>c;
    ll c1 = egcd(a, b ,x ,y);
    if ((c*-1)%c1!=0) cout << -1;
    else
    {
        ll k = (-1*c)/c1;
        cout <<k*x<<" "<<k*y;
    }

    return 0;
}
