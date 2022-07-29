// link :-  https://codeforces.com/gym/101498/problem/I
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

int main() {
    io;
    int t;
    cin >> t;
    int n, m;
    while (t--) {
        cin >> n >> m;

        if (n == 0 || m == 0) {
            if (max(n, m) % 2 == 0) {
                cout << "abdullah";
            }
            else {
                cout << "hasan";
            }
        }
        else if (n % 2 == 0 && m % 2 == 0) {
            cout << "abdullah";
        }
        else {
            cout << "hasan";
        }
        cout << endl;
    }
    return 0;
}