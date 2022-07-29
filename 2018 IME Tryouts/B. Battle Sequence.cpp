// link :-  https://codeforces.com/gym/101858/problem/B
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf 0x3f3f3f3f3f3f3f3f
#define file freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fo1(s, n) for(int i=s ; i<n ; i++)
#define fo2(s) for(int i=s ; i>=0 ; i--)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int main()
{
    io;
    string k;
    cin >> k;
    int c=0, s=0;
    fo1 (0, k.size())
    {
        if (k[i]=='C')
        {
            if (c<2)
            {
                cout << "B";
                c++;
            }
            else
            {
                cout << "P";
                c = 0 ;
            }
            s=0;
        }
        else if (k[i]=='S')
        {
            if (s<2)
            {
                cout << "D";
                s++;
            }
            else
            {
                cout << "T";
                s = 0 ;
            }
            c=0;
        }
    }
    return 0;
}