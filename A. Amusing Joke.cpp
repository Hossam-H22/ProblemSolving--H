// link :- https://codeforces.com/contest/141/problem/A
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
    ll arr[200]={};
    string s1, s2, s3;
    cin>>s1>>s2>>s3;
    s1 += s2;
    sort(s1.begin(), s1.end());
    sort(s3.begin(), s3.end());
    (s1==s3)? cout<<"YES" : cout<<"NO";

    return 0;
}