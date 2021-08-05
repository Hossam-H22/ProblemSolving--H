// link :-  https://codeforces.com/problemset/problem/791/A

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

int main()
{
    io;
    int a, b, cont=0;
    cin>>a>>b;
    while (a<=b)
    {
        a*=3;
        b*=2;
        cont++;
    }
    cout << cont;

    return 0;
}