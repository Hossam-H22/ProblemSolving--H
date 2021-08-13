// link :-  https://codeforces.com/gym/101498/problem/H
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
const ll N = 1e4;

int main() {
    io;
    int t;
    int n,s;
    cin >> t;
    while (t--) {
        cin >> n >> s;
        vector<int> ans;
        if (9 * n < s) {
            cout << -1;
        }
        else if (s % 2 == 1 && n % 2 == 0) {
            cout << -1;
        }
        else if (s == 1 && n > 1 && n % 2 == 1) {
            cout << -1;
        }
        else {
            int halfs = s / 2;
            int spots = n / 2;
            int co = 0;
            while (spots>0) {
                if (halfs >= 9) {
                    halfs -= 9;
                    ans.push_back(9);
                }
                else {
                    ans.push_back(halfs);
                    halfs = 0;
                }
                spots--;
                cout << ans[co];
                co++;
            }

            if (n % 2 == 1) {
                cout<<(halfs * 2 + s%2);
            }

            for (int i = co - 1; i >= 0; i--) {
                cout << ans[i];
            }
        }
        cout << endl;
    }
    return 0;
}