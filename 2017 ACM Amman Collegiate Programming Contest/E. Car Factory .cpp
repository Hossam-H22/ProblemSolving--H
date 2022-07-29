// link :-  https://codeforces.com/gym/101498/problem/E
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

int t;
ll n, k;

int main()
{
    io;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        cout << (n+k-1) << '\n';
    }
    return 0;
}