// link :-  https://codeforces.com/problemset/problem/199/A
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
    ll n;
    cin >> n;
    if (n==0) cout << "0 0 0";
    else
    {
        ll a = 0, b = 1;
        while (a+b !=n)
        {
            ll temp = a;
            a=b;
            b = temp+b;
        }
        cout<<0<<" "<<a<<" "<<b;
    }

    return 0;
}
