// link :- https://codeforces.com/gym/101498/problem/B
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

int main() {
    io;
    int t;
    string a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        map <char, int> mp;
        for (int i=0 ; i< b.size() ; i++) mp[b[i]] += 1;
        int maxi = 0;
        for (int i=0 ; i< a.size() ; i++)
        {
            if (mp[a[i]] >= 1)
            {
                mp[a[i]] -= 1;
                maxi++;
            }else{
                break;
            }
        }
        cout << maxi << endl;
    }
    return 0;
}