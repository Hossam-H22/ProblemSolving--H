// link :- https://codeforces.com/contest/514/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf 0x3f3f3f3f3f3f3f3f
#define file freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fo1(s, n) for(int i=s ; i<n ; i++)
#define fo2(s, n) for(int i=s ; i>=n ; i--)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int main()
{
    io;
    string s;
    cin>>s;
    int x=abs((s[0]-'0')-9);
    if (x<(s[0]-'0') && x!=0)  s[0]='0'+x;

    fo1(1, s.size())
    {
        x=abs((s[i]-'0') -9);
        if (x<(s[i]-'0'))  s[i]='0'+x;
    }
    cout<<s;


    return 0;
}