// link :-  https://codeforces.com/problemset/problem/955/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;

int main()
{
    io;
    float hh, mm;
    double h, d, c, n;
    cin >> hh >> mm;
    cin >> h >> d >> c >> n;
    double befor=0 , after=0;
    ll sum;
    int tm = (hh*60) +mm;
    if (tm <= 1200)
    {
        sum = ceil(h/n);
        befor = sum*c;
        h += ((1200-tm)*d);
        sum = ceil(h/n);
        after = (sum*c)*0.8;
        cout << fixed << setprecision(4) << min(befor, after);
    }
    else
    {
        sum = ceil(h/n);
        after = (sum*c)*0.8;
        cout << fixed << setprecision(4) << after;
    }

    return 0;
}
