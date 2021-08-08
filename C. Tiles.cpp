// link :-  https://codeforces.com/problemset/problem/1178/C
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

int const mod = 998244353;
int main()
{
    io;
    int w, h;
    cin>>w>>h;
    int x = 1, sum = w+h;
    while(sum--) x=(x*2)%mod;
    cout<<x;

    return 0;
}