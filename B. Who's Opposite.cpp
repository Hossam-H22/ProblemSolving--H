// link :-  https://codeforces.com/contest/1560/problem/B
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
    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        if ((abs(a-b) < 2)||(2* abs(a-b) < c)||(2* abs(a-b) < b)||(2* abs(a-b) < a)) cout << -1 << endl;
        else
        {
            if (abs(a-b)+c <= abs(a-b)*2) cout << abs(a-b)+c << endl;
            else cout << (abs(a-b)+c)-(abs(a-b)*2) << endl;
        }
    }

    return 0;
}