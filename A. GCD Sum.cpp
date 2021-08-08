// link :-  https://codeforces.com/problemset/problem/1498/A
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

ll sumofdigit(ll num)
{
    ll sum = 0;
    while (num!=0)
    {
        sum += (num%10);
        num/=10;
    }

    return sum;
}

ll gcd(ll n, ll x)
{
    if (x==0) return n;

    return gcd(x, n%x);
}
int main()
{
    io;
    int t;
    cin >> t;
    ll n, g, digit;
    while (t--)
    {
        cin >> n;
        do
        {
            digit = sumofdigit(n);
            g = gcd(n, digit);
            n++;
        }
        while (g <= 1);
        cout << n-1 << endl;
    }


    return 0;
}
