// link :- https://codeforces.com/contest/1105/problem/B
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
    int n, k, x=0;
    cin>>n>>k;
    string s;
    cin>>s;

    for (char c='a'; c<='z' ; c++)
    {
        int siz=0, cont=0;
        fo1(0, n)
        {
            if (s[i]==c) siz++;
            else siz=0;

            if (siz==k)
            {
                cont++;
                siz=0;
            }
        }
        x=max(x, cont);
    }
    cout<<x;


    return 0;
}