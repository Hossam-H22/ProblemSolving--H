// link :- https://codeforces.com/group/Lq34voxr4E/contest/352164/problem/D
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
    ll n, x, plus = 0, minus = 0;
    cin>>n;
    for (int i=1 ; i<=5 ; i++)
    {
        cin>>x;
        if (x%n==0) plus = plus + x;
        else minus = minus + x;
    }
    if (plus==minus) cout << "TIE";
    else if (plus > minus) cout << "3abas";
    else cout << "Sultan";


    return 0;
}