// link :- https://codeforces.com/group/Lq34voxr4E/contest/353760/problem/D
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ll n, r, ri, num = 0, first = -1, last = 0;
    cin >> n >> r;
    for (int i = 1; i <= n; i++)
    {
        cin >> ri;
        if (ri == r)
        {
            num++;
            last = i;
        }
        if (ri == r && first == -1) first = i;
    }
    if (num == 0) cout << -1;
    else cout<<first<<" "<<last<<" "<<num<<endl;

    return 0;
}