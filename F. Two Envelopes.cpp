// link :-  https://codeforces.com/gym/100488/problem/F
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
    ll a,b,c;
    cin>>a>>b>>c;
    a=a*2;
    b=b*2;
    c=c*2;
    if(c>=a&&c<=b){
        cout<<"Take another envelope";
    }
    else
        cout<<"Stay with this envelope";

    return 0;
}
