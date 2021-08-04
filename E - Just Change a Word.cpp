// link :- https://codeforces.com/gym/100488/problem/E

//     -->  Dragon_H22  <--
#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf 0x3f3f3f3f3f3f3f3f
#define file freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fo1(s, n) for(int i=s ; i<n ; i++)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;


ll arr[100005]={};
int main()
{
    io;
    string s;
    cin>>s;
    int maxx=-1;
    if(s.length()%2!=0)
    {
        cout<<"NO";
        return 0;
    }
    int arr[30]={};
    for(int i=0 ; i<s.length() ; i++) arr[s[i]-'a']++;
    for(int i=0 ; i<s.length() ; i++) maxx=max(maxx,arr[s[i]-'a']);
    if(maxx<=s.length()/2) cout<<"YES";
    else cout<<"NO";





    return 0;
}
