// link :- https://codeforces.com/contest/1041/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    ll mini=LONG_LONG_MAX, maxi=-1;
    for (int i=0 ; i<n ; ++i)
    {
        ll a;
        cin>>a;
        mini=min(mini,a);
        maxi=max(maxi, a);
    }
    cout<<maxi-mini+1-n;


    return 0;
}