// link :- https://codeforces.com/contest/669/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    if(n<=2) cout<<1;
    else
    {
        long long ans=(n/3)*2;
        if(n%3==0) cout<<ans;
        else cout<<ans+1;
    }

    return 0;
}
