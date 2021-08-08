// link :-  https://codeforces.com/problemset/problem/483/A
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

vector<ll> vect, comb;
bool is = false;
ll gcd(ll a, ll b)
{
    if (b==0) return a;

    return gcd(b, a%b);
}
bool coprime(ll a, ll b)
{
    return gcd(max(a, b), min(a, b)) == 1;
}
void solve(int start = 0, int end1 = 3)
{
    if (end1 == 0)
    {
        if (!is)
        {
            if (coprime(comb[0],comb[1]) && coprime(comb[1],comb[2]) && !coprime(comb[0],comb[2]))
            {
                cout <<comb[0]<<" "<<comb[1]<<" "<<comb[2];
                is = true;
            }
        }
        return;
    }
    for (int i = start; i <= vect.size()-end1; ++i)
    {
        comb.push_back(vect[i]);
        solve(i + 1, end1 - 1);
        if (is)
            return;
        comb.pop_back();
    }
}
int main()
{
    io;
    ll l ,r ,a ,b ,c;
    cin >>l>>r;
    if (r-l <2)
    {
        cout << -1;
        return 0;
    }
    for(ll i=l ; i<=r ;i++) vect.push_back(i);
    solve();
    if (!is) cout << -1;


    return 0;
}
