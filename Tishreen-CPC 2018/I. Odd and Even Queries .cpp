// link :- https://codeforces.com/gym/101801
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
const ll N = 2e5;

int evensuntil[N + 5];
ll comp[N + 5];
int arr[N];

int main() {
    io;
    int t;

    evensuntil[0] = 0;
    comp[0] = 1;

    for (int i = 1; i <= N; i++) {
        comp[i] = comp[i - 1] * (2 % mod);
        comp[i] %= mod;
    }

    cin >> t;

    while (t--) {
        int n, q;
        int l, r, t;
        cin >> n >> q;

        int evens = 0;

        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
            if (arr[i]%2 == 0) {
                evens++;
            }
            evensuntil[i] = evens;
        }

        for (int i = 1; i <= q; i++) {
            cin >> l >> r >> t;

            int totalnum = (r - l + 1);
            int evennum = evensuntil[r] - evensuntil[l - 1];
            int oddnum = totalnum - evennum;


            if (t == 1) {
                cout << comp[oddnum] - 1 << endl;
            }
            else {
                cout << ((comp[evennum] - 1)*comp[oddnum]) % mod << endl;
            }
        }
    }
    return 0;
}