// link :- https://codeforces.com/group/Lq34voxr4E/contest/353702/problem/E
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main()
{
    int h;
    string m ,s;
    cin>>h>>m>>s;
    if (s=="PM")
    {
        if (h<12) cout<<h+12<<":"<<m;
        else cout<<h<<":"<<m;
    }
    else
    {
        if (h==12) cout<<"00:"<<m;
        else if (h<10) cout<<"0"<<h<<":"<<m;
        else cout<<h<<":"<<m;
    }

    return 0;
}