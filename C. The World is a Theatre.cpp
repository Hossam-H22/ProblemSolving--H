// link :-  https://codeforces.com/problemset/problem/131/C
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

ll nCr(int n, int m)
{
    ll res = 1;
    for (int i = 0; i < m; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

int main()
{
    io;
    int n, m, t;
    cin >>n>>m>>t;
    int boy = 4, girl= t-4;
    ll total= 0, sum =1;
    while(true)
    {
        if (girl<1 || boy>n)
        {
            break;
        }
        sum = nCr(n,boy) * nCr(m,girl);
        total += sum;
        girl--;
        boy++;
    }
    cout << total;


    return 0;
}