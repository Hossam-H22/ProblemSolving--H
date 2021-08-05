// link :-  https://codeforces.com/contest/677/problem/A

//     -->  Dragon_H22  <--

#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf 0x3f3f3f3f3f3f3f3f
#define file freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int main()
{
    io;
    int n,h,x;
    cin >> n>>h;
    int cnt=0;
    for (int i=0 ; i<n ; i++)
    {
        cin>>x;
        if (x<=h) cnt++;
        else cnt +=2;
    }
    cout << cnt;
    return 0;
}