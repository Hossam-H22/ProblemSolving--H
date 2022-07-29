// link :-  https://codeforces.com/problemset/problem/236/B
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

const int mod = 1073741824;
vector<int> prim;
int arr[105][25] = {0};
void sieve(int n = 1000)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=n; i += p) prime[i] = false;
        }
    }
    int c = 0;
    for (int p=2; p<=n; p++)
    {
        if (prime[p])
        {
            prim.push_back(p);
            c++;
            if (c==25) break;
        }
    }
}
void countDivisors(ll n = 100)
{
    for (int i = 1; i <= 100; ++i)
    {
        int ii = i;
        for (int j = 0; ii != 1 && j < 25; ++j)
        {
            while (ii%prim[j]==0)
            {
                arr[i][j]++;
                ii /= prim[j];
            }
        }
    }
}

int main()
{
    io;
    sieve();
    countDivisors();
    int a, b, c;
    cin >>a>>b>>c;
    ll sum= 0, num;
    for (int i=1;i<=a;i++)
    {
        for (int j=1;j<=b;j++)
        {
            for (int k=1;k<=c;k++)
            {
                int divisors = 1;
                for (int d = 0; d < 25; ++d)
                {
                    divisors *= (1+arr[i][d]+arr[j][d]+arr[k][d]);
                }
                sum += divisors;
            }
        }
    }
    cout << sum%mod;

    return 0;
}