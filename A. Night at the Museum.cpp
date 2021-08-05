// link :-  https://codeforces.com/contest/731/problem/A
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
    string s;
    cin>>s;
    int cnt=0, two =0;
    fo1(0, s.size())
    {
        int one = s[i] - 'a';
        int first = one-two, second = two-one;
        if (first<0) first+=26;
        if (second<0) second+=26;
        cnt += min(first, second);
        two = one;
    }
    cout << cnt;

    return 0;
}
