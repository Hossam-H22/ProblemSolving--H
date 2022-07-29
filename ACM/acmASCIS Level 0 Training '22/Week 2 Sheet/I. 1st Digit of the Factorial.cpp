// link :- https://codeforces.com/group/Lq34voxr4E/contest/352164/problem/I
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
    ll n, answer = 0;
    int factor[] = { 1,1,2,6,4 };
    cin>>n;
    if (n<=4) answer=factor[n];

    cout<<answer;

    return 0;
}