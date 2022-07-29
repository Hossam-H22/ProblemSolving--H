// link :- https://codeforces.com/contest/1560/problem/C
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
    while (t--)
    {
        ll k;
        cin>>k;
        ll x= ceil(sqrt(k));
        if (x*x-k<x) cout<<x<<" "<<x*x-k+1<<endl;
        else cout<<2*x-x*x+k-1<<" "<<x<<endl;
    }



    return 0;
}