// link :- https://codeforces.com/contest/1213/problem/B
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
    int t;
    cin >>t;
    while(t--)
    {
        ll n ,c=0, num;
        cin>>n;
        ll arr[n+5]={};
        fo1(0,n) cin>>arr[i];
        num=arr[n-1];
        fo2(n-1,0)
        {
            if (arr[i]>num) c++;
            num=min(num, arr[i]);
        }
        cout<<c<<endl;
    }

    return 0;
}