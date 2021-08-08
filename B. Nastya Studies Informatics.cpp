// link :-  https://codeforces.com/problemset/problem/992/B
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

ll l, r, x, y;
vector<ll> vect;
ll gcd(ll a, ll b)
{
    if (b==0) return a;

    return gcd(b, a%b);
}

void countDivisors(ll n)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                vect.push_back(i);

            else
            {
                vect.push_back(i);
                vect.push_back(n / i);
            }
        }
    }
}

int main()
{
    io;
    cin >>l>>r>>x>>y;
    countDivisors(y);
    sort(vect.begin(), vect.end());
    ll c=0;
    for (int i = 0; i < vect.size(); i++)
    {
        for (int s=0 ; s< vect.size() ; s++)
        {
            ll a=vect[i], b=vect[s], G, L;
            G=gcd(a,b);
            L=(a*b)/G;
            if (G==x && L==y && a>=l && a<=r && b>=l && b<=r) c++;

        }
    }
    cout << c;

    return 0;
}
