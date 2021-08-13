// link :- https://codeforces.com/gym/101801
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
 
map<int, int> mp;
 
void primeFactorize(int n) {
    if (n%2==0) mp[2]++;
    while (n%2==0) n /= 2;
 
    for (int i=3 ; i*i<=n ; i+=2) {
        if (n%i==0) mp[i]++;
        while (n%i==0) n/= i;
    }
    if (n>2) mp[n]++;
}
 
int main()
{
    io;
    int t, n, num;
    cin >> t;
    while (t--)
    {
        cin >> n;
        mp.clear();
        fo1 (0, n)
        {
            cin >> num;
            primeFactorize(num);
        }
        ll mini = 0;
        map<int,int>::iterator it;
        for (it=mp.begin(); it!=mp.end(); it++) mini+=((it->second) + 2) / 3;
        cout << mini << endl;
    }
 
    return 0;
}