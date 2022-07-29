// link :- https://codeforces.com/contest/158/problem/B
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
    int n, s,one=0, two=0, three=0, four=0;
    cin>>n;
    fo1(0,n)
    {
        cin>>s;
        if(s==1) one++;
        else if (s==2) two++;
        else if (s==3) three++;
        else if (s==4) four++;
    }
    cout<< four+three+(two*2+max(0,one-three)+3)/4;

    return 0;
}