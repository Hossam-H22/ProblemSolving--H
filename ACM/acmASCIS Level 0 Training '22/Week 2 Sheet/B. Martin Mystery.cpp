// link :- https://codeforces.com/group/Lq34voxr4E/contest/352164/problem/B
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf 0x3f3f3f3f3f3f3f3f
#define file freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fo1(s, n) for(int i=s ; i<n ; i++)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int main()
{
    double n, x, y, x1, y1, x2, y2, a, b;
    bool inbody=1;
    cin>>n>>x1>>y1>>x2>>y2;
    a=(y2-y1)/(x2-x1);
    b=y1-(a*x1);
    for (int i=3; i<=n; i++)
    {
        cin>>x>>y;
        if ((a*x)+b != y)
        {
            inbody=0;
        }
    }
    if (inbody)
        cout << "YES";
    else
        cout << "NO";


    return 0;
}