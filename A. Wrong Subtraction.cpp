// link :- https://codeforces.com/contest/977/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    int k;
    cin>>n>>k;
    for (int i=0 ; i<k ; i++)
    {
        if (n%10==0) n/=10;
        else n--;
    }
    cout<<n;

    return 0;
}