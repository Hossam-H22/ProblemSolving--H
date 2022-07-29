// link :- https://codeforces.com/group/Lq34voxr4E/contest/352164/problem/J
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
    ll k, counter = 0;
    cin>>k;
    char num[k];
    cin>>num;
    while (k--)
    {
        ll digit1 = num[k-1], digit2 = num[k];
        digit1=(digit1*10)+digit2;
        if (digit1%4==0) counter++;
    }
    cout << counter;

    return 0;
}