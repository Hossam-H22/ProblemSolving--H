// link :- https://codeforces.com/contest/265/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string t, s;
    cin >> s >> t;
    int cont=0;
    for (int i=0 ; i<t.size() ; i++)
    {
        if (s[cont] == t[i]) cont++;
    }
    cout << cont+1;

    return 0;
}