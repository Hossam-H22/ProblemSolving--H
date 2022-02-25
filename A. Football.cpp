// link :- https://codeforces.com/contest/43/problem/A
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
    int n, c1=1, c2=0, flag=1;
    string s1, s2, m;
    cin>>n>>s1;
    fo1(1, n)
    {
        cin>>m;
        if (m==s1) c1++;
        else
        {
            if (flag--) s2=m;
            c2++;
        }
    }
    (c1>c2)? cout<<s1 : cout<<s2;

    return 0;
}