// link :-  https://codeforces.com/contest/112/problem/A

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
    string s1, s2;
    cin>>s1>>s2;
    transform(s1.begin(),s1.end(),s1.begin(),::toupper);
    transform(s2.begin(),s2.end(),s2.begin(),::toupper);
    fo1(0, s1.size())
    {
        if(s1[i] > s2[i])
        {
            cout << 1;
            return 0;
        }
        else if(s1[i] < s2[i])
        {
            cout << -1;
            return 0;
        }
    }
    cout <<0;

    return 0;
}