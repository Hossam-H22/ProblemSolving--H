// link :- https://codeforces.com/group/Lq34voxr4E/contest/352164/problem/H
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
    int t;
    string n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        for (int s=0 ; s<n.length() ; s++)
        {
            if (n[s] == '4') cout << "7";
            else cout << "4";
        }
        cout<<endl;
    }

    return 0;
}