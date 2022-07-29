// link :-  https://codeforces.com/gym/101858/problem/D
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf 0x3f3f3f3f3f3f3f3f
#define file freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fo1(s, n) for(int i=s ; i<n ; i++)
#define fo2(s) for(int i=s ; i>=0 ; i--)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int main()
{
    io;
    int t;
    cin >> t;
    while (t--)
    {
        ll p;
        cin >> p;
        ll ans1 = (-1 + sqrt(1 + 8 * p)) / 2;
        ll ans2 = (-1 - sqrt(1 + 8 * p)) / 2;
        cout << max(ans1, ans2) << endl;
    }
    return 0;
}