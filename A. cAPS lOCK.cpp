// link :- https://codeforces.com/contest/131/problem/A
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
    string s;
    cin>>s;
    int cont=0;
    fo1(0, s.length()) if (isupper(s[i])) cont++;
    if (cont==s.length() || (islower(s[0])&&(cont==s.length()-1)))
    {
        fo1(0, s.length())
        {
            if (islower(s[i])) s[i]-=32;
            else s[i]+=32;
        }
    }
    cout<<s;









    return 0;
}