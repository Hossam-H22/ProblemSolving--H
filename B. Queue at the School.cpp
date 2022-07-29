// link :-  https://codeforces.com/problemset/problem/266/B
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
    int t, n;
    string s;
    cin >> n >> t >> s;
    while (t--)
    {
        int i = 0;
        while (i < n-1)
        {
            if (s[i] == 'B' && s[i+1] == 'G')
            {
                s[i] = 'G';
                s[i+1] = 'B';
                i+=2;
            }
            else i++;
        }
    }
    cout << s;

    return 0;
}