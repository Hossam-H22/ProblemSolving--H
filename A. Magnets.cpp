// link :-  https://codeforces.com/contest/344/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, last, cont=1;
    cin>>n>>x;
    last = x;
    for (int i=1; i<n ; i++)
    {
        cin >> x;
        if (x!=last) cont++;
        last=x;
    }
    cout << cont;

    return 0;
}
