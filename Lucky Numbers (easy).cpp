// link :-  https://codeforces.com/problemset/problem/96/B
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll n,ans=99999999999;
int solve(ll num,ll four,ll seven)
{
    if(num>=n)
    {
        if(four==seven) ans=min(ans,num);
        if(num > 99999999999) return 0;
    }
    solve(num*10+4,four+1,seven);
    solve(num*10+7,four,seven+1);
}

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n;
    solve(0,0,0);
    cout<<ans<<endl;

    return 0;
}
