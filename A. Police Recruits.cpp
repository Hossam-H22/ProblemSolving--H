// link :-  https://codeforces.com/contest/427/problem/A

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
    int n, cont=0, x, free=0;
    cin>>n;
    for(0, n)
    {
        cin >> x;
        if (x>0) free+=x;
        if (x==-1)
        {
            if (free>0) free--;
            else cont++;
        }
    }
    cout << cont;

    return 0;
}