// link :- https://codeforces.com/contest/69/problem/A
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
    int n, num, x=0, y=0, z=0;
    cin>>n;
    while (n--)
    {
        cin>>num;
        x+=num;
        cin>>num;
        y+=num;
        cin>>num;
        z+=num;
    }
    if (x==0&&y==0&&z==0) cout<<"YES";
    else cout<<"NO";

    return 0;
}