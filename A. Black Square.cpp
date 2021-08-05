// link :-  https://codeforces.com/contest/431/problem/A
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
    io;
    int arr[5]={}, cont=0;
    fo1(1, 5) cin>>arr[i];
    string s;
    cin>>s;
    fo1(0, s.size()) cont += arr[s[i]-'0'];
    cout << cont;



    return 0;
}
