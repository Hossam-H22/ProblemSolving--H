// link :- https://codeforces.com/contest/1475/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        while(n)
        {
            if (n%2==1 && n!=1) break;
            n/=2;
        }
        if (n%2==1) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}