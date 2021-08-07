// link :-  https://codeforces.com/problemset/problem/535/B
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll n;
ll solve(ll lucky=0 , ll index=0)
{
    if (lucky > n)
        return -1;
    else if (lucky == n)
        return index;

    return max(
               solve(lucky*10 +4 ,index*2 +1),
               solve(lucky*10 +7 ,index*2 +2) );
}


int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n;
    cout << solve();



    return 0;
}