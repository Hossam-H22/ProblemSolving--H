// link :- https://codeforces.com/contest/581/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >>a>>b;
    cout << min(a,b) << " " << (max(a,b)-min(a,b))/2;


    return 0;
}