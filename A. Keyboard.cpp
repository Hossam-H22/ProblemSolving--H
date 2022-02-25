// link :- https://codeforces.com/contest/474/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf 0x3f3f3f3f3f3f3f3f
#define file freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fo1(s, n) for(int i=s ; i<n ; i++)
#define fo2(s, n) for(int i=s ; i>=n ; i--)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;


int main()
{
    io;
    string order = "qwertyuiopasdfghjkl;zxcvbnm,./", s1;
    char c;
    int x;
    cin>>c>>s1;
    (c=='L')? x=1:x=-1;
    fo1(0, s1.length()) cout<<order[order.find(s1[i])+x];


    return 0;
}