// link :-  https://codeforces.com/problemset/problem/892/C
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


ll gcd(ll n, ll x)
{
    if (x==0) return n;

    return gcd(x, n%x);
}
int main()
{
    io;
    int n, one = 0;
    cin >> n;
    ll arr[n];
    for (int i = 0; i<n ; i++)
    {
        cin >> arr[i];
        if (arr[i]==1) one++;
    }
    ll mini = 1e9;
    for (int i=0;i<n;i++)
    {
        ll c = 0, g = 0;
        for (int s=i; s<n ;s++)
        {
            g = gcd(g,arr[s]);
            if (g==1)
            {
                mini = min(mini,c);
                break;
            }
            c++;
        }
    }
    if (one > 0) one--;
    if (mini == 1e9) cout << -1;
    else cout << mini+n-1-one;


    return 0;
}