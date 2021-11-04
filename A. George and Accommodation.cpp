// link :- https://codeforces.com/contest/467/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t, cont=0;
    cin>>t;
    while (t--)
    {
        int p, q;
        cin>>p>>q;
        if(q-p>=2) cont++;
    }
    cout<<cont;

    return 0;
}