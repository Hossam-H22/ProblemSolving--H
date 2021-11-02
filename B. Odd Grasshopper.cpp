// link :- https://codeforces.com/contest/1607/problem/B
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll x, n;
        cin>>x>>n;
        for (ll i=(n-(n%4))+1 ; i<=n ; i++)
        {
            if (x%2==0) x-=i;
            else x+=i;
        }
        cout<<x<<endl;
    }

    return 0;
}