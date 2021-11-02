// link :- https://codeforces.com/contest/705/problem/A
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
    for (int i=1 ; i<=n ; i++)
    {
        if (i%2!=0) cout<<"I hate ";
        else cout<<"I love ";
        if (i==n) cout<<"it";
        else cout <<"that ";
    }

    return 0;
}