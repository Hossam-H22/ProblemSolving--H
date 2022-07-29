// link :-  https://codeforces.com/gym/101801
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

const ll mod = 1e9 + 7;
const ll N = 101;

ll ans[N];

ll plz[N][N];

int main()
{
    io;
    int t,n;
    cin >> t;

    ll pp = 1;

    for (int i = 1; i <= 100; i++) {
        plz[i][i] = 1;
        for (int j = i % 2; j <= i; j += 2) {
            for (int k = 1; k < i;k++) {
                int p = j ^ (i - k);
                plz[i][j] += (plz[k][p]%mod);
                plz[i][j] %= mod;
            }
        }

        ans[i] = (pp - plz[i][0] + mod)%mod;
        pp = pp * (2 % mod);
        pp %= mod;
    }

    while (t--) {
        cin >> n;
        cout << ans[n] << endl;
    }
    return 0;
}