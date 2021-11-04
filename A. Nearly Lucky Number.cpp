// link :- https://codeforces.com/contest/110/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, cont=0;
    cin>>n;
    while(n)
    {
        if (n%10==4 || n%10==7) cont++;
        n/=10;
    }
    if (!cont)
    {
        cout << "NO";
        return 0;
    }
    while(cont)
    {
        if (cont%10!=4 && cont%10!=7)
        {
            cout <<"NO";
            return 0;
        }
        cont/=10;
    }
    cout << "YES";

    return 0;
}