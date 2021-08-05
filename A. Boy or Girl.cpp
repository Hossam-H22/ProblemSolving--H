// link :-  https://codeforces.com/contest/236/problem/A

//     -->  Dragon_H22  <--

#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf 0x3f3f3f3f3f3f3f3f
#define file freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fo1(s, n) for(int i=s ; i<n ; i++)
#define fo2(s, n) for(int i=s ; i<=n ; i++)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int main()
{
    io;
    string s;
    int arr[200]={};
    cin>>s;
    int siz = s.size();
    fo1(0, s.size())
    {
        arr[s[i]]++;
        if(arr[s[i]]>1) siz--;
    }
    siz%2==0 ? cout <<"CHAT WITH HER!" : cout <<"IGNORE HIM!";

    return 0;
}