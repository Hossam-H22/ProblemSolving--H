// link :-  https://codeforces.com/problemset/problem/1023/A
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
    int n, m;
    string s, t;
    cin >> n >> m;
    cin >> s >> t;

    if (n > m+1)
    {
        cout << "NO";
        return 0;
    }

    if (n<m || n==m+1)
    {
        bool is = true;
        for (int i=0 ; i<n ;i++)
        {
            if (s[i] == '*')
            {
                is = false;
                break;
            }
        }
        if (is)
        {
            cout << "NO";
            return 0;
        }
    }

    for (int i=0 ; i<m ; i++)
    {
        if (s[i] == '*') break;

        if (s[i] != t[i])
        {
            cout << "NO";
            return 0;
        }
    }
    int i = n-1;
    for (int z=m-1 ; z>=0 ; z--)
    {
        if (s[i] == '*') break;

        if (s[i] != t[z])
        {
            cout << "NO";
            return 0;
        }
        i--;
    }

    cout << "YES";



    return 0;
}
