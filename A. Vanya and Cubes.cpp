// link :- https://codeforces.com/contest/492/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, cont=0, i=1;
    cin>>n;
    while (true)
    {
        cont+= ((i*(i+1))/2);
        if (cont>n) break;
        i++;
    }
    cout<<i-1;

    return 0;
}