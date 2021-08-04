//  link :-     https://codeforces.com/gym/100488/problem/D

//     -->  Dragon_H22  <--
#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf 0x3f3f3f3f3f3f3f3f
#define file freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define for(s, n) for(int i=s ; i<n ; i++)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
int main()
{
    io;
    ll n, m,xx=-1,cnt=0;
    bool found= false;
    cin >>n;
    ll arr[100005] = {};
    map<ll,ll> mp;
    for (int i=0 ; i<n ; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
        if(arr[i]==arr[0])cnt++;
    }
    cin >> m;
    for (int i=0 ; i<m ; i++)
    {
        ll k, x;
        cin>>k>>x;
        mp[arr[k-1]]--;
        arr[k-1] = x;
        mp[x]++;
        if (mp[x]==n&&found==false){
            xx=i+1;
            found=true;
        }
    }
    if (cnt==n)cout<<0;
    else{
        if(xx!=-1)cout<<xx;
        else cout<<-1;
    }





    return 0;
}