// link :- https://codeforces.com/gym/101498/problem/A
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
    int t, n, f;
    string s;
    cin >> t;
    while (t--)
    {
        cin >>n;
        map<int , int> mp;
        int max = 0, num= 0;
        for (int i=0 ; i<n ; i++)
        {
            cin >> s >> f;
            mp[f] +=1;
            if (mp[f] > max)
            {
                max = mp[f];
                num = f;
            }
            else if(mp[f] == max && num > f){
                num = f;
            }
        }
        cout << num << endl;
    }
    return 0;
}